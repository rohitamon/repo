/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[46];
    char stringdata0[902];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "joystick"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 3), // "val"
QT_MOC_LITERAL(4, 25, 10), // "button_val"
QT_MOC_LITERAL(5, 36, 1), // "a"
QT_MOC_LITERAL(6, 38, 8), // "axis_val"
QT_MOC_LITERAL(7, 47, 1), // "b"
QT_MOC_LITERAL(8, 49, 9), // "direction"
QT_MOC_LITERAL(9, 59, 3), // "dir"
QT_MOC_LITERAL(10, 63, 40), // "on_pushButton_connect_disconn..."
QT_MOC_LITERAL(11, 104, 7), // "checked"
QT_MOC_LITERAL(12, 112, 27), // "on_pushButton_drive_clicked"
QT_MOC_LITERAL(13, 140, 30), // "on_pushButton_robo_log_clicked"
QT_MOC_LITERAL(14, 171, 19), // "on_settings_clicked"
QT_MOC_LITERAL(15, 191, 16), // "on_login_clicked"
QT_MOC_LITERAL(16, 208, 24), // "on_pushButton_ok_clicked"
QT_MOC_LITERAL(17, 233, 26), // "on_pushButton_ok_2_clicked"
QT_MOC_LITERAL(18, 260, 11), // "onReadyRead"
QT_MOC_LITERAL(19, 272, 13), // "on_up_pressed"
QT_MOC_LITERAL(20, 286, 14), // "on_up_released"
QT_MOC_LITERAL(21, 301, 15), // "on_down_pressed"
QT_MOC_LITERAL(22, 317, 16), // "on_down_released"
QT_MOC_LITERAL(23, 334, 15), // "on_left_pressed"
QT_MOC_LITERAL(24, 350, 16), // "on_left_released"
QT_MOC_LITERAL(25, 367, 16), // "on_right_pressed"
QT_MOC_LITERAL(26, 384, 17), // "on_right_released"
QT_MOC_LITERAL(27, 402, 27), // "on_radioButton_slow_clicked"
QT_MOC_LITERAL(28, 430, 29), // "on_radioButton_medium_clicked"
QT_MOC_LITERAL(29, 460, 27), // "on_radioButton_high_clicked"
QT_MOC_LITERAL(30, 488, 11), // "ip_detected"
QT_MOC_LITERAL(31, 500, 29), // "on_pushButton_refresh_clicked"
QT_MOC_LITERAL(32, 530, 15), // "on_exit_clicked"
QT_MOC_LITERAL(33, 546, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(34, 570, 10), // "connection"
QT_MOC_LITERAL(35, 581, 34), // "on_pushButton_auto_forward_pr..."
QT_MOC_LITERAL(36, 616, 35), // "on_pushButton_auto_forward_re..."
QT_MOC_LITERAL(37, 652, 26), // "on_pushButton_stop_pressed"
QT_MOC_LITERAL(38, 679, 27), // "on_pushButton_stop_released"
QT_MOC_LITERAL(39, 707, 34), // "on_pushButton_auto_reverse_pr..."
QT_MOC_LITERAL(40, 742, 35), // "on_pushButton_auto_reverse_re..."
QT_MOC_LITERAL(41, 778, 18), // "on_login_2_clicked"
QT_MOC_LITERAL(42, 797, 26), // "on_pushButton_ok_3_clicked"
QT_MOC_LITERAL(43, 824, 24), // "on_pushButton_on_clicked"
QT_MOC_LITERAL(44, 849, 25), // "on_pushButton_off_pressed"
QT_MOC_LITERAL(45, 875, 26) // "on_pushButton_off_released"

    },
    "MainWindow\0joystick\0\0val\0button_val\0"
    "a\0axis_val\0b\0direction\0dir\0"
    "on_pushButton_connect_disconnect_toggled\0"
    "checked\0on_pushButton_drive_clicked\0"
    "on_pushButton_robo_log_clicked\0"
    "on_settings_clicked\0on_login_clicked\0"
    "on_pushButton_ok_clicked\0"
    "on_pushButton_ok_2_clicked\0onReadyRead\0"
    "on_up_pressed\0on_up_released\0"
    "on_down_pressed\0on_down_released\0"
    "on_left_pressed\0on_left_released\0"
    "on_right_pressed\0on_right_released\0"
    "on_radioButton_slow_clicked\0"
    "on_radioButton_medium_clicked\0"
    "on_radioButton_high_clicked\0ip_detected\0"
    "on_pushButton_refresh_clicked\0"
    "on_exit_clicked\0on_pushButton_2_clicked\0"
    "connection\0on_pushButton_auto_forward_pressed\0"
    "on_pushButton_auto_forward_released\0"
    "on_pushButton_stop_pressed\0"
    "on_pushButton_stop_released\0"
    "on_pushButton_auto_reverse_pressed\0"
    "on_pushButton_auto_reverse_released\0"
    "on_login_2_clicked\0on_pushButton_ok_3_clicked\0"
    "on_pushButton_on_clicked\0"
    "on_pushButton_off_pressed\0"
    "on_pushButton_off_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x08 /* Private */,
       4,    2,  212,    2, 0x08 /* Private */,
       6,    2,  217,    2, 0x08 /* Private */,
       8,    1,  222,    2, 0x08 /* Private */,
      10,    1,  225,    2, 0x08 /* Private */,
      12,    0,  228,    2, 0x08 /* Private */,
      13,    0,  229,    2, 0x08 /* Private */,
      14,    0,  230,    2, 0x08 /* Private */,
      15,    0,  231,    2, 0x08 /* Private */,
      16,    0,  232,    2, 0x08 /* Private */,
      17,    0,  233,    2, 0x08 /* Private */,
      18,    0,  234,    2, 0x08 /* Private */,
      19,    0,  235,    2, 0x08 /* Private */,
      20,    0,  236,    2, 0x08 /* Private */,
      21,    0,  237,    2, 0x08 /* Private */,
      22,    0,  238,    2, 0x08 /* Private */,
      23,    0,  239,    2, 0x08 /* Private */,
      24,    0,  240,    2, 0x08 /* Private */,
      25,    0,  241,    2, 0x08 /* Private */,
      26,    0,  242,    2, 0x08 /* Private */,
      27,    0,  243,    2, 0x08 /* Private */,
      28,    0,  244,    2, 0x08 /* Private */,
      29,    0,  245,    2, 0x08 /* Private */,
      30,    1,  246,    2, 0x08 /* Private */,
      31,    0,  249,    2, 0x08 /* Private */,
      32,    0,  250,    2, 0x08 /* Private */,
      33,    0,  251,    2, 0x08 /* Private */,
      34,    0,  252,    2, 0x08 /* Private */,
      35,    0,  253,    2, 0x08 /* Private */,
      36,    0,  254,    2, 0x08 /* Private */,
      37,    0,  255,    2, 0x08 /* Private */,
      38,    0,  256,    2, 0x08 /* Private */,
      39,    0,  257,    2, 0x08 /* Private */,
      40,    0,  258,    2, 0x08 /* Private */,
      41,    0,  259,    2, 0x08 /* Private */,
      42,    0,  260,    2, 0x08 /* Private */,
      43,    0,  261,    2, 0x08 /* Private */,
      44,    0,  262,    2, 0x08 /* Private */,
      45,    0,  263,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    5,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
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
    QMetaType::Void, QMetaType::Int,    5,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->joystick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->button_val((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->axis_val((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->direction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_connect_disconnect_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_drive_clicked(); break;
        case 6: _t->on_pushButton_robo_log_clicked(); break;
        case 7: _t->on_settings_clicked(); break;
        case 8: _t->on_login_clicked(); break;
        case 9: _t->on_pushButton_ok_clicked(); break;
        case 10: _t->on_pushButton_ok_2_clicked(); break;
        case 11: _t->onReadyRead(); break;
        case 12: _t->on_up_pressed(); break;
        case 13: _t->on_up_released(); break;
        case 14: _t->on_down_pressed(); break;
        case 15: _t->on_down_released(); break;
        case 16: _t->on_left_pressed(); break;
        case 17: _t->on_left_released(); break;
        case 18: _t->on_right_pressed(); break;
        case 19: _t->on_right_released(); break;
        case 20: _t->on_radioButton_slow_clicked(); break;
        case 21: _t->on_radioButton_medium_clicked(); break;
        case 22: _t->on_radioButton_high_clicked(); break;
        case 23: _t->ip_detected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_pushButton_refresh_clicked(); break;
        case 25: _t->on_exit_clicked(); break;
        case 26: _t->on_pushButton_2_clicked(); break;
        case 27: _t->connection(); break;
        case 28: _t->on_pushButton_auto_forward_pressed(); break;
        case 29: _t->on_pushButton_auto_forward_released(); break;
        case 30: _t->on_pushButton_stop_pressed(); break;
        case 31: _t->on_pushButton_stop_released(); break;
        case 32: _t->on_pushButton_auto_reverse_pressed(); break;
        case 33: _t->on_pushButton_auto_reverse_released(); break;
        case 34: _t->on_login_2_clicked(); break;
        case 35: _t->on_pushButton_ok_3_clicked(); break;
        case 36: _t->on_pushButton_on_clicked(); break;
        case 37: _t->on_pushButton_off_pressed(); break;
        case 38: _t->on_pushButton_off_released(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
