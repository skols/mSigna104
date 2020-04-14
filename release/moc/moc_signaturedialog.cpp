/****************************************************************************
** Meta object code from reading C++ file 'signaturedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/signaturedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signaturedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SignatureDialog_t {
    QByteArrayData data[7];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_SignatureDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_SignatureDialog_t qt_meta_stringdata_SignatureDialog = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 5),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 16),
QT_MOC_LITERAL(4, 40, 9),
QT_MOC_LITERAL(5, 50, 8),
QT_MOC_LITERAL(6, 59, 15)
    },
    "SignatureDialog\0error\0\0keychainsUpdated\0"
    "txUpdated\0updateTx\0updateKeychains\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignatureDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06,
       3,    0,   42,    2, 0x06,
       4,    0,   43,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x0a,
       6,    0,   45,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    1,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SignatureDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignatureDialog *_t = static_cast<SignatureDialog *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->keychainsUpdated(); break;
        case 2: _t->txUpdated(); break;
        case 3: _t->updateTx(); break;
        case 4: _t->updateKeychains(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SignatureDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignatureDialog::error)) {
                *result = 0;
            }
        }
        {
            typedef void (SignatureDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignatureDialog::keychainsUpdated)) {
                *result = 1;
            }
        }
        {
            typedef void (SignatureDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SignatureDialog::txUpdated)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject SignatureDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SignatureDialog.data,
      qt_meta_data_SignatureDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *SignatureDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignatureDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SignatureDialog.stringdata))
        return static_cast<void*>(const_cast< SignatureDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SignatureDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SignatureDialog::error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SignatureDialog::keychainsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SignatureDialog::txUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
