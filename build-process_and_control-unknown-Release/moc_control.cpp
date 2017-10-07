/****************************************************************************
** Meta object code from reading C++ file 'control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../process_and_control/control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_control_t {
    QByteArrayData data[10];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_control_t qt_meta_stringdata_control = {
    {
QT_MOC_LITERAL(0, 0, 7), // "control"
QT_MOC_LITERAL(1, 8, 21), // "pushbutton_move_right"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "pushbutton_move_left"
QT_MOC_LITERAL(4, 52, 18), // "pushbutton_move_go"
QT_MOC_LITERAL(5, 71, 20), // "pushbutton_move_back"
QT_MOC_LITERAL(6, 92, 21), // "pushbutton_move_close"
QT_MOC_LITERAL(7, 114, 21), // "pushbutton_flashlight"
QT_MOC_LITERAL(8, 136, 20), // "pushbutton_move_down"
QT_MOC_LITERAL(9, 157, 18) // "pushbutton_move_up"

    },
    "control\0pushbutton_move_right\0\0"
    "pushbutton_move_left\0pushbutton_move_go\0"
    "pushbutton_move_back\0pushbutton_move_close\0"
    "pushbutton_flashlight\0pushbutton_move_down\0"
    "pushbutton_move_up"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_control[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
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

void control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        control *_t = static_cast<control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pushbutton_move_right(); break;
        case 1: _t->pushbutton_move_left(); break;
        case 2: _t->pushbutton_move_go(); break;
        case 3: _t->pushbutton_move_back(); break;
        case 4: _t->pushbutton_move_close(); break;
        case 5: _t->pushbutton_flashlight(); break;
        case 6: _t->pushbutton_move_down(); break;
        case 7: _t->pushbutton_move_up(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject control::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_control.data,
      qt_meta_data_control,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *control::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_control.stringdata0))
        return static_cast<void*>(const_cast< control*>(this));
    return QThread::qt_metacast(_clname);
}

int control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
