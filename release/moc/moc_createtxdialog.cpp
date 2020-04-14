/****************************************************************************
** Meta object code from reading C++ file 'createtxdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/createtxdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createtxdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TxOutLayout_t {
    QByteArrayData data[1];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TxOutLayout_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TxOutLayout_t qt_meta_stringdata_TxOutLayout = {
    {
QT_MOC_LITERAL(0, 0, 11)
    },
    "TxOutLayout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxOutLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TxOutLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TxOutLayout::staticMetaObject = {
    { &QHBoxLayout::staticMetaObject, qt_meta_stringdata_TxOutLayout.data,
      qt_meta_data_TxOutLayout,  qt_static_metacall, 0, 0}
};


const QMetaObject *TxOutLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxOutLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TxOutLayout.stringdata))
        return static_cast<void*>(const_cast< TxOutLayout*>(this));
    return QHBoxLayout::qt_metacast(_clname);
}

int TxOutLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHBoxLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CoinControlWidget_t {
    QByteArrayData data[6];
    char stringdata[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CoinControlWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CoinControlWidget_t qt_meta_stringdata_CoinControlWidget = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 11),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 14),
QT_MOC_LITERAL(4, 46, 8),
QT_MOC_LITERAL(5, 55, 10)
    },
    "CoinControlWidget\0updateTotal\0\0"
    "QItemSelection\0selected\0deselected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoinControlWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void CoinControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoinControlWidget *_t = static_cast<CoinControlWidget *>(_o);
        switch (_id) {
        case 0: _t->updateTotal((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject CoinControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CoinControlWidget.data,
      qt_meta_data_CoinControlWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *CoinControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoinControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CoinControlWidget.stringdata))
        return static_cast<void*>(const_cast< CoinControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CoinControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_CreateTxDialog_t {
    QByteArrayData data[12];
    char stringdata[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CreateTxDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CreateTxDialog_t qt_meta_stringdata_CreateTxDialog = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 8),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 14),
QT_MOC_LITERAL(4, 40, 14),
QT_MOC_LITERAL(5, 55, 17),
QT_MOC_LITERAL(6, 73, 5),
QT_MOC_LITERAL(7, 79, 11),
QT_MOC_LITERAL(8, 91, 12),
QT_MOC_LITERAL(9, 104, 11),
QT_MOC_LITERAL(10, 116, 16),
QT_MOC_LITERAL(11, 133, 7)
    },
    "CreateTxDialog\0addTxOut\0\0PaymentRequest\0"
    "paymentRequest\0switchCoinControl\0state\0"
    "removeTxOut\0TxOutLayout*\0txOutLayout\0"
    "setRemoveEnabled\0enabled\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateTxDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a,
       1,    0,   47,    2, 0x2a,
       5,    1,   48,    2, 0x08,
       7,    1,   51,    2, 0x08,
      10,    1,   54,    2, 0x08,
      10,    0,   57,    2, 0x28,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,

       0        // eod
};

void CreateTxDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateTxDialog *_t = static_cast<CreateTxDialog *>(_o);
        switch (_id) {
        case 0: _t->addTxOut((*reinterpret_cast< const PaymentRequest(*)>(_a[1]))); break;
        case 1: _t->addTxOut(); break;
        case 2: _t->switchCoinControl((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->removeTxOut((*reinterpret_cast< TxOutLayout*(*)>(_a[1]))); break;
        case 4: _t->setRemoveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setRemoveEnabled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TxOutLayout* >(); break;
            }
            break;
        }
    }
}

const QMetaObject CreateTxDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateTxDialog.data,
      qt_meta_data_CreateTxDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *CreateTxDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateTxDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateTxDialog.stringdata))
        return static_cast<void*>(const_cast< CreateTxDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateTxDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
