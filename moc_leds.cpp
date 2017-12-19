/****************************************************************************
** Meta object code from reading C++ file 'leds.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "libs/leds.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'leds.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LEDs_t {
    QByteArrayData data[13];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LEDs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LEDs_t qt_meta_stringdata_LEDs = {
    {
QT_MOC_LITERAL(0, 0, 4), // "LEDs"
QT_MOC_LITERAL(1, 5, 4), // "init"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 4), // "argc"
QT_MOC_LITERAL(4, 16, 7), // "char*[]"
QT_MOC_LITERAL(5, 24, 4), // "argv"
QT_MOC_LITERAL(6, 29, 9), // "lightGlas"
QT_MOC_LITERAL(7, 39, 6), // "ledNum"
QT_MOC_LITERAL(8, 46, 3), // "red"
QT_MOC_LITERAL(9, 50, 5), // "green"
QT_MOC_LITERAL(10, 56, 4), // "blue"
QT_MOC_LITERAL(11, 61, 5), // "clear"
QT_MOC_LITERAL(12, 67, 5) // "close"

    },
    "LEDs\0init\0\0argc\0char*[]\0argv\0lightGlas\0"
    "ledNum\0red\0green\0blue\0clear\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LEDs[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x0a /* Public */,
       6,    4,   39,    2, 0x0a /* Public */,
      11,    0,   48,    2, 0x0a /* Public */,
      12,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LEDs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LEDs *_t = static_cast<LEDs *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< char*(*)[]>(_a[2]))); break;
        case 1: _t->lightGlas((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->clear(); break;
        case 3: _t->close(); break;
        default: ;
        }
    }
}

const QMetaObject LEDs::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LEDs.data,
      qt_meta_data_LEDs,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LEDs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LEDs::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LEDs.stringdata0))
        return static_cast<void*>(const_cast< LEDs*>(this));
    return QObject::qt_metacast(_clname);
}

int LEDs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
