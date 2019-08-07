/****************************************************************************
** Meta object code from reading C++ file 'frame_handle_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../frame_handle_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frame_handle_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Frame_Handle_Form_t {
    QByteArrayData data[13];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Frame_Handle_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Frame_Handle_Form_t qt_meta_stringdata_Frame_Handle_Form = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Frame_Handle_Form"
QT_MOC_LITERAL(1, 18, 11), // "mode_switch"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 25), // "on_mode3_time_btn_clicked"
QT_MOC_LITERAL(4, 57, 26), // "on_mode1_start_btn_clicked"
QT_MOC_LITERAL(5, 84, 25), // "on_mode1_stop_btn_clicked"
QT_MOC_LITERAL(6, 110, 23), // "on_mode1_ok_btn_clicked"
QT_MOC_LITERAL(7, 134, 23), // "on_mode2_ok_btn_clicked"
QT_MOC_LITERAL(8, 158, 25), // "on_mode1_path_btn_clicked"
QT_MOC_LITERAL(9, 184, 25), // "on_mode2_path_btn_clicked"
QT_MOC_LITERAL(10, 210, 25), // "on_mode3_path_btn_clicked"
QT_MOC_LITERAL(11, 236, 28), // "on_mode4_imgpath_btn_clicked"
QT_MOC_LITERAL(12, 265, 25) // "on_mode4_path_btn_clicked"

    },
    "Frame_Handle_Form\0mode_switch\0\0"
    "on_mode3_time_btn_clicked\0"
    "on_mode1_start_btn_clicked\0"
    "on_mode1_stop_btn_clicked\0"
    "on_mode1_ok_btn_clicked\0on_mode2_ok_btn_clicked\0"
    "on_mode1_path_btn_clicked\0"
    "on_mode2_path_btn_clicked\0"
    "on_mode3_path_btn_clicked\0"
    "on_mode4_imgpath_btn_clicked\0"
    "on_mode4_path_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Frame_Handle_Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
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

void Frame_Handle_Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Frame_Handle_Form *_t = static_cast<Frame_Handle_Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mode_switch(); break;
        case 1: _t->on_mode3_time_btn_clicked(); break;
        case 2: _t->on_mode1_start_btn_clicked(); break;
        case 3: _t->on_mode1_stop_btn_clicked(); break;
        case 4: _t->on_mode1_ok_btn_clicked(); break;
        case 5: _t->on_mode2_ok_btn_clicked(); break;
        case 6: _t->on_mode1_path_btn_clicked(); break;
        case 7: _t->on_mode2_path_btn_clicked(); break;
        case 8: _t->on_mode3_path_btn_clicked(); break;
        case 9: _t->on_mode4_imgpath_btn_clicked(); break;
        case 10: _t->on_mode4_path_btn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Frame_Handle_Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Frame_Handle_Form.data,
      qt_meta_data_Frame_Handle_Form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Frame_Handle_Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Frame_Handle_Form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Frame_Handle_Form.stringdata0))
        return static_cast<void*>(const_cast< Frame_Handle_Form*>(this));
    return QWidget::qt_metacast(_clname);
}

int Frame_Handle_Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
