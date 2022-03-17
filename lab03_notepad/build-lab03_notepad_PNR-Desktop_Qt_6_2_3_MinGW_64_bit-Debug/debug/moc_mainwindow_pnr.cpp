/****************************************************************************
** Meta object code from reading C++ file 'mainwindow_pnr.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab03_notepad_PNR/mainwindow_pnr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow_pnr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_PNR_t {
    const uint offsetsAndSize[26];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_PNR_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_PNR_t qt_meta_stringdata_MainWindow_PNR = {
    {
QT_MOC_LITERAL(0, 14), // "MainWindow_PNR"
QT_MOC_LITERAL(15, 26), // "on_actionNew_NPR_triggered"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 27), // "on_actionOpen_PNR_triggered"
QT_MOC_LITERAL(71, 30), // "on_actionSave_as_PNR_triggered"
QT_MOC_LITERAL(102, 28), // "on_actionPrint_PNR_triggered"
QT_MOC_LITERAL(131, 27), // "on_actionExit_PNR_triggered"
QT_MOC_LITERAL(159, 27), // "on_actionUndo_PNR_triggered"
QT_MOC_LITERAL(187, 27), // "on_actionRedo_PNR_triggered"
QT_MOC_LITERAL(215, 27), // "on_actionSave_PNR_triggered"
QT_MOC_LITERAL(243, 7), // "isSaved"
QT_MOC_LITERAL(251, 23), // "on_actionFont_triggered"
QT_MOC_LITERAL(275, 24) // "on_actionAbout_triggered"

    },
    "MainWindow_PNR\0on_actionNew_NPR_triggered\0"
    "\0on_actionOpen_PNR_triggered\0"
    "on_actionSave_as_PNR_triggered\0"
    "on_actionPrint_PNR_triggered\0"
    "on_actionExit_PNR_triggered\0"
    "on_actionUndo_PNR_triggered\0"
    "on_actionRedo_PNR_triggered\0"
    "on_actionSave_PNR_triggered\0isSaved\0"
    "on_actionFont_triggered\0"
    "on_actionAbout_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow_PNR[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    0,   90,    2, 0x08,   11 /* Private */,

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

void MainWindow_PNR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow_PNR *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionNew_NPR_triggered(); break;
        case 1: _t->on_actionOpen_PNR_triggered(); break;
        case 2: _t->on_actionSave_as_PNR_triggered(); break;
        case 3: _t->on_actionPrint_PNR_triggered(); break;
        case 4: _t->on_actionExit_PNR_triggered(); break;
        case 5: _t->on_actionUndo_PNR_triggered(); break;
        case 6: _t->on_actionRedo_PNR_triggered(); break;
        case 7: _t->on_actionSave_PNR_triggered(); break;
        case 8: _t->isSaved(); break;
        case 9: _t->on_actionFont_triggered(); break;
        case 10: _t->on_actionAbout_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MainWindow_PNR::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow_PNR.offsetsAndSize,
    qt_meta_data_MainWindow_PNR,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_PNR_t
, QtPrivate::TypeAndForceComplete<MainWindow_PNR, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow_PNR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow_PNR::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow_PNR.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow_PNR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
