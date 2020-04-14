/****************************************************************************
** Meta object code from reading C++ file 'accountmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/accountmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AccountModel_t {
    QByteArrayData data[13];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AccountModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AccountModel_t qt_meta_stringdata_AccountModel = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 7),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 12),
QT_MOC_LITERAL(4, 35, 5),
QT_MOC_LITERAL(5, 41, 7),
QT_MOC_LITERAL(6, 49, 4),
QT_MOC_LITERAL(7, 54, 8),
QT_MOC_LITERAL(8, 63, 6),
QT_MOC_LITERAL(9, 70, 16),
QT_MOC_LITERAL(10, 87, 5),
QT_MOC_LITERAL(11, 93, 7),
QT_MOC_LITERAL(12, 101, 6)
    },
    "AccountModel\0updated\0\0accountNames\0"
    "newTx\0bytes_t\0hash\0newBlock\0height\0"
    "updateSyncHeight\0error\0message\0update\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,
       4,    1,   47,    2, 0x06,
       7,    2,   50,    2, 0x06,
       9,    1,   55,    2, 0x06,
      10,    1,   58,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      12,    0,   61,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void AccountModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountModel *_t = static_cast<AccountModel *>(_o);
        switch (_id) {
        case 0: _t->updated((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->newTx((*reinterpret_cast< const bytes_t(*)>(_a[1]))); break;
        case 2: _t->newBlock((*reinterpret_cast< const bytes_t(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->updateSyncHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AccountModel::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountModel::updated)) {
                *result = 0;
            }
        }
        {
            typedef void (AccountModel::*_t)(const bytes_t & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountModel::newTx)) {
                *result = 1;
            }
        }
        {
            typedef void (AccountModel::*_t)(const bytes_t & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountModel::newBlock)) {
                *result = 2;
            }
        }
        {
            typedef void (AccountModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountModel::updateSyncHeight)) {
                *result = 3;
            }
        }
        {
            typedef void (AccountModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountModel::error)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject AccountModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_AccountModel.data,
      qt_meta_data_AccountModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *AccountModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AccountModel.stringdata))
        return static_cast<void*>(const_cast< AccountModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int AccountModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AccountModel::updated(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AccountModel::newTx(const bytes_t & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AccountModel::newBlock(const bytes_t & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AccountModel::updateSyncHeight(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AccountModel::error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
