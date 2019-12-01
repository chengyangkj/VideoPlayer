/****************************************************************************
** Meta object code from reading C++ file 'video_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "video_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Video_Form_t {
    QByteArrayData data[11];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Video_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Video_Form_t qt_meta_stringdata_Video_Form = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Video_Form"
QT_MOC_LITERAL(1, 11, 15), // "Open_video_Slot"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "Frame_handle_Slot"
QT_MOC_LITERAL(4, 46, 14), // "start_btn_Slot"
QT_MOC_LITERAL(5, 61, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 83, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 107, 21), // "on_slider_sliderMoved"
QT_MOC_LITERAL(8, 129, 8), // "position"
QT_MOC_LITERAL(9, 138, 23), // "on_slider_sliderPressed"
QT_MOC_LITERAL(10, 162, 21) // "on_choose_btn_clicked"

    },
    "Video_Form\0Open_video_Slot\0\0"
    "Frame_handle_Slot\0start_btn_Slot\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_slider_sliderMoved\0position\0"
    "on_slider_sliderPressed\0on_choose_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Video_Form[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Video_Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Video_Form *_t = static_cast<Video_Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Open_video_Slot(); break;
        case 1: _t->Frame_handle_Slot(); break;
        case 2: _t->start_btn_Slot(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_slider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_slider_sliderPressed(); break;
        case 7: _t->on_choose_btn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Video_Form::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Video_Form.data,
    qt_meta_data_Video_Form,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Video_Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Video_Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Video_Form.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Video_Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
