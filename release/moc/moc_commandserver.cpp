/****************************************************************************
** Meta object code from reading C++ file 'commandserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/commandserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CommandServer_t {
    QByteArrayData data[11];
    char stringdata[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CommandServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CommandServer_t qt_meta_stringdata_CommandServer = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 6),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 3),
QT_MOC_LITERAL(4, 26, 7),
QT_MOC_LITERAL(5, 34, 8),
QT_MOC_LITERAL(6, 43, 10),
QT_MOC_LITERAL(7, 54, 7),
QT_MOC_LITERAL(8, 62, 20),
QT_MOC_LITERAL(9, 83, 4),
QT_MOC_LITERAL(10, 88, 16)
    },
    "CommandServer\0gotUrl\0\0url\0gotFile\0"
    "fileName\0gotCommand\0command\0"
    "std::vector<QString>\0args\0handleConnection\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       4,    1,   37,    2, 0x06,
       6,    2,   40,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    0,   45,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,    7,    9,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CommandServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommandServer *_t = static_cast<CommandServer *>(_o);
        switch (_id) {
        case 0: _t->gotUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->gotFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->gotCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<QString>(*)>(_a[2]))); break;
        case 3: _t->handleConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CommandServer::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommandServer::gotUrl)) {
                *result = 0;
            }
        }
        {
            typedef void (CommandServer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommandServer::gotFile)) {
                *result = 1;
            }
        }
        {
            typedef void (CommandServer::*_t)(const QString & , const std::vector<QString> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CommandServer::gotCommand)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject CommandServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CommandServer.data,
      qt_meta_data_CommandServer,  qt_static_metacall, 0, 0}
};


const QMetaObject *CommandServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CommandServer.stringdata))
        return static_cast<void*>(const_cast< CommandServer*>(this));
    return QObject::qt_metacast(_clname);
}

int CommandServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CommandServer::gotUrl(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommandServer::gotFile(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CommandServer::gotCommand(const QString & _t1, const std::vector<QString> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
