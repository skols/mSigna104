/****************************************************************************
** Meta object code from reading C++ file 'txactions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/txactions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'txactions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TxActions_t {
    QByteArrayData data[29];
    char stringdata[395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TxActions_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TxActions_t qt_meta_stringdata_TxActions = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 5),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 7),
QT_MOC_LITERAL(4, 25, 16),
QT_MOC_LITERAL(5, 42, 8),
QT_MOC_LITERAL(6, 51, 6),
QT_MOC_LITERAL(7, 58, 10),
QT_MOC_LITERAL(8, 69, 15),
QT_MOC_LITERAL(9, 85, 7),
QT_MOC_LITERAL(10, 93, 8),
QT_MOC_LITERAL(11, 102, 8),
QT_MOC_LITERAL(12, 111, 19),
QT_MOC_LITERAL(13, 131, 6),
QT_MOC_LITERAL(14, 138, 6),
QT_MOC_LITERAL(15, 145, 14),
QT_MOC_LITERAL(16, 160, 16),
QT_MOC_LITERAL(17, 177, 21),
QT_MOC_LITERAL(18, 199, 18),
QT_MOC_LITERAL(19, 218, 17),
QT_MOC_LITERAL(20, 236, 9),
QT_MOC_LITERAL(21, 246, 22),
QT_MOC_LITERAL(22, 269, 21),
QT_MOC_LITERAL(23, 291, 20),
QT_MOC_LITERAL(24, 312, 24),
QT_MOC_LITERAL(25, 337, 15),
QT_MOC_LITERAL(26, 353, 19),
QT_MOC_LITERAL(27, 373, 11),
QT_MOC_LITERAL(28, 385, 8)
    },
    "TxActions\0error\0\0message\0setCurrentWidget\0"
    "QWidget*\0widget\0txsChanged\0updateCurrentTx\0"
    "current\0previous\0searchTx\0showSignatureDialog\0"
    "signTx\0sendTx\0exportTxToFile\0"
    "importTxFromFile\0importTxFromClipboard\0"
    "exportAllTxsToFile\0importTxsFromFile\0"
    "viewRawTx\0copyAddressToClipboard\0"
    "copyTxHashToClipboard\0copyRawTxToClipboard\0"
    "insertRawTxFromClipboard\0saveRawTxToFile\0"
    "insertRawTxFromFile\0viewTxOnWeb\0"
    "deleteTx\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TxActions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06,
       4,    1,  127,    2, 0x06,
       7,    0,  130,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    2,  131,    2, 0x08,
      11,    0,  136,    2, 0x08,
      12,    0,  137,    2, 0x08,
      13,    0,  138,    2, 0x08,
      14,    0,  139,    2, 0x08,
      15,    0,  140,    2, 0x08,
      16,    0,  141,    2, 0x08,
      17,    0,  142,    2, 0x08,
      18,    0,  143,    2, 0x08,
      19,    0,  144,    2, 0x08,
      20,    0,  145,    2, 0x08,
      21,    0,  146,    2, 0x08,
      22,    0,  147,    2, 0x08,
      23,    0,  148,    2, 0x08,
      24,    0,  149,    2, 0x08,
      25,    0,  150,    2, 0x08,
      26,    0,  151,    2, 0x08,
      27,    0,  152,    2, 0x08,
      28,    0,  153,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TxActions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TxActions *_t = static_cast<TxActions *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setCurrentWidget((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->txsChanged(); break;
        case 3: _t->updateCurrentTx((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->searchTx(); break;
        case 5: _t->showSignatureDialog(); break;
        case 6: _t->signTx(); break;
        case 7: _t->sendTx(); break;
        case 8: _t->exportTxToFile(); break;
        case 9: _t->importTxFromFile(); break;
        case 10: _t->importTxFromClipboard(); break;
        case 11: _t->exportAllTxsToFile(); break;
        case 12: _t->importTxsFromFile(); break;
        case 13: _t->viewRawTx(); break;
        case 14: _t->copyAddressToClipboard(); break;
        case 15: _t->copyTxHashToClipboard(); break;
        case 16: _t->copyRawTxToClipboard(); break;
        case 17: _t->insertRawTxFromClipboard(); break;
        case 18: _t->saveRawTxToFile(); break;
        case 19: _t->insertRawTxFromFile(); break;
        case 20: _t->viewTxOnWeb(); break;
        case 21: _t->deleteTx(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TxActions::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TxActions::error)) {
                *result = 0;
            }
        }
        {
            typedef void (TxActions::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TxActions::setCurrentWidget)) {
                *result = 1;
            }
        }
        {
            typedef void (TxActions::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TxActions::txsChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TxActions::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TxActions.data,
      qt_meta_data_TxActions,  qt_static_metacall, 0, 0}
};


const QMetaObject *TxActions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TxActions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TxActions.stringdata))
        return static_cast<void*>(const_cast< TxActions*>(this));
    return QObject::qt_metacast(_clname);
}

int TxActions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void TxActions::error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TxActions::setCurrentWidget(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TxActions::txsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
