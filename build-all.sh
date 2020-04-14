#!/bin/bash

for OPTION in $@
do
    case $OPTION in
    linux)
        if [[ ! -z "$OS" ]]; then echo "OS cannot be set twice"; exit 1; fi
        OS=linux
        OPTIONS="OS=linux $OPTIONS"
    ;;

    mingw64)
        if [[ ! -z "$OS" ]]; then echo "OS cannot be set twice"; exit 1; fi
        OS=mingw64
        OPTIONS="OS=mingw64 $OPTIONS"
        mingw64=true
    ;;

    osx)
        if [[ ! -z "$OS" ]]; then echo "OS cannot be set twice"; exit 1; fi
        OS=osx
        OPTIONS="OS=osx $OPTIONS"
    ;;

    debug)
        if [[ ! -z "$BUILD_TYPE" ]]; then echo "Build type cannot be set twice"; exit 2; fi
        BUILD_TYPE=debug
        OPTIONS="DEBUG=1 $OPTIONS"
    ;;

    release)
        if [[ ! -z "$BUILD_TYPE" ]]; then echo "Build type cannot be set twice"; exit 2; fi
        BUILD_TYPE=release
    ;;

    litecoin)
        if [[ ! -z "$TARGET_NAME" ]]; then echo "Target name cannot be set twice"; exit 2; fi
        TARGET_NAME=mSIGNA-ltc
    ;;

    libs_only)
        libs_only=true
    ;;

    tools_only)
        tools_only=true
    ;;

    *)
        OPTIONS="$OPTIONS $OPTION"
    esac
done

if [[ -z "$OS" ]]
then
    UNAME_S=$(uname -s)
    if [[ "$UNAME_S" == "Linux" ]]
    then
        OS=linux
    elif [[ "$UNAME_S" == "Darwin" ]]
    then
        OS=osx
    fi
fi

# Set target platform parameters
if [ $mingw64 ]
then
    if [[ -z "$QMAKE_PATH" ]]; then QMAKE_PATH="/usr/x86_64-w64-mingw32/host/bin/"; fi
    SPEC="-spec win32-g++"
fi

# Use release as default build type
if [[ -z "$BUILD_TYPE" ]]
then
    BUILD_TYPE=release
fi

# Use mSIGNA as default target name
if [[ -z "$TARGET_NAME" ]]
then
    TARGET_NAME=mSIGNA
fi

if [[ -z $(git diff --shortstat) ]]
then
    COMMIT_HASH=$(git rev-parse HEAD)
else
    COMMIT_HASH="N/A"
fi

echo "Building using commit hash $COMMIT_HASH..."
echo "#pragma once" > BuildInfo.h.tmp
echo "#define COMMIT_HASH \"$COMMIT_HASH\"" >> BuildInfo.h.tmp

if [[ ! -f BuildInfo.h ]]
then
    touch BuildInfo.h
fi

if [[ -z $(diff BuildInfo.h BuildInfo.h.tmp) ]]
then
    rm BuildInfo.h.tmp
else
    mv BuildInfo.h.tmp BuildInfo.h
fi

CURRENT_DIR=$(pwd)

set -x
set -e

cd deps/logger
make $OPTIONS
make install

cd ../Signals
make install

cd ../stdutils
make install

cd ../sysutils
make $OPTIONS
make install

cd ../CoinCore
make $OPTIONS
make install

cd ../CoinQ
make $OPTIONS
make install

cd ../CoinDB
make lib $OPTIONS
make install_lib $OPTIONS

if [ $libs_only ]
then
    exit
fi

if [ $tools_only ]
then
    make tools $OPTIONS
    set +x
    echo
    echo "All dependencies built."
    echo
    echo "To install coindb and syncdb tools, run the following commands:"
    echo "  $ cd deps/CoinDB"
    echo "  $ sudo make install_tools"
    echo
    exit
fi

#cd ../WebSocketClient
#make libs OS=$OS $OPTIONS
#SYSROOT=../../sysroot make install

cd $CURRENT_DIR

#TODO: Automatically detect whether the following units need recompilation
# Always recompile coinparams
if [[ -e build/$BUILD_TYPE/obj/coinparams.o ]]
then
    rm build/$BUILD_TYPE/obj/coinparams.o
fi

# Always recompile splashscreen
if [[ -e build/$BUILD_TYPE/obj/splashscreen.o ]]
then
    rm build/$BUILD_TYPE/obj/splashscreen.o
fi

# Always recompile main
if [[ -e build/$BUILD_TYPE/obj/main.o ]]
then
    rm build/$BUILD_TYPE/obj/main.o
fi

# The following units also need to be recompiled
#   accountmodel.o
#   createtxdialog.o
#   mainwindow.o
#   scriptmodel.o
#   txmodel.o

# For OS X, remove any existing instance of the app bundle
if [[ "$OS" == "osx" ]]
then
    if [[ -e build/$BUILD_TYPE/$TARGET_NAME.app ]]
    then
        rm -rf build/$BUILD_TYPE/$TARGET_NAME.app
    fi
fi

${QMAKE_PATH}qmake $SPEC CONFIG+=$BUILD_TYPE $TARGET_NAME.pro && make $OPTIONS

if [[ "$OS" == "osx" ]]
then
    if [[ -e build/$BUILD_TYPE/$TARGET_NAME.app/Contents/Resources/qt.conf ]]
    then
        rm build/$BUILD_TYPE/$TARGET_NAME.app/Contents/Resources/qt.conf
    fi
    ${MACDEPLOYQT_PATH}macdeployqt $(find ./build/$BUILD_TYPE -name $TARGET_NAME.app)
fi
