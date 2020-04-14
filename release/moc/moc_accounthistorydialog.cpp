/****************************************************************************
** Meta object code from reading C++ file 'accounthistorydialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/accounthistorydialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accounthistorydialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AccountHistoryDialog_t {
    QByteArrayData data[11];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AccountHistoryDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AccountHistoryDialog_t qt_meta_stringdata_AccountHistoryDialog = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 9),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 15),
QT_MOC_LITERAL(4, 48, 7),
QT_MOC_LITERAL(5, 56, 8),
QT_MOC_LITERAL(6, 65, 6),
QT_MOC_LITERAL(7, 72, 6),
QT_MOC_LITERAL(8, 79, 9),
QT_MOC_LITERAL(9, 89, 11),
QT_MOC_LITERAL(10, 101, 8)
    },
    "AccountHistoryDialog\0txDeleted\0\0"
    "updateCurrentTx\0current\0previous\0"
    "signTx\0sendTx\0viewRawTx\0viewTxOnWeb\0"
    "deleteTx\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountHistoryDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    2,   50,    2, 0x08,
       6,    0,   55,    2, 0x08,
       7,    0,   56,    2, 0x08,
       8,    0,   57,    2, 0x08,
       9,    0,   58,    2, 0x08,
      10,    0,   59,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AccountHistoryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountHistoryDialog *_t = static_cast<AccountHistoryDialog *>(_o);
        switch (_id) {
        case 0: _t->txDeleted(); break;
        case 1: _t->updateCurrentTx((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->signTx(); break;
        case 3: _t->sendTx(); break;
        case 4: _t->viewRawTx(); break;
        case 5: _t->viewTxOnWeb(); break;
        case 6: _t->deleteTx(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AccountHistoryDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AccountHistoryDialog::txDeleted)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject AccountHistoryDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AccountHistoryDialog.data,
      qt_meta_data_AccountHistoryDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *AccountHistoryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountHistoryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AccountHistoryDialog.stringdata))
        return static_cast<void*>(const_cast< AccountHistoryDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AccountHistoryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AccountHistoryDialog::txDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
