/****************************************************************************
** Meta object code from reading C++ file 'imageviewer_pnr.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab03_imageViewer_PNR/imageviewer_pnr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageviewer_pnr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageViewer_PNR_t {
    const uint offsetsAndSize[22];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ImageViewer_PNR_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ImageViewer_PNR_t qt_meta_stringdata_ImageViewer_PNR = {
    {
QT_MOC_LITERAL(0, 15), // "ImageViewer_PNR"
QT_MOC_LITERAL(16, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 32), // "on_actionFit_to_Window_triggered"
QT_MOC_LITERAL(74, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(101, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(126, 30), // "on_actionNormal_Size_triggered"
QT_MOC_LITERAL(157, 26), // "on_actionZoom_In_triggered"
QT_MOC_LITERAL(184, 27), // "on_actionZoom_Out_triggered"
QT_MOC_LITERAL(212, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(236, 24) // "on_actionAbout_triggered"

    },
    "ImageViewer_PNR\0on_actionOpen_triggered\0"
    "\0on_actionFit_to_Window_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_actionPrint_triggered\0"
    "on_actionNormal_Size_triggered\0"
    "on_actionZoom_In_triggered\0"
    "on_actionZoom_Out_triggered\0"
    "on_actionCopy_triggered\0"
    "on_actionAbout_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageViewer_PNR[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

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

       0        // eod
};

void ImageViewer_PNR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageViewer_PNR *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionOpen_triggered(); break;
        case 1: _t->on_actionFit_to_Window_triggered(); break;
        case 2: _t->on_actionSave_as_triggered(); break;
        case 3: _t->on_actionPrint_triggered(); break;
        case 4: _t->on_actionNormal_Size_triggered(); break;
        case 5: _t->on_actionZoom_In_triggered(); break;
        case 6: _t->on_actionZoom_Out_triggered(); break;
        case 7: _t->on_actionCopy_triggered(); break;
        case 8: _t->on_actionAbout_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject ImageViewer_PNR::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ImageViewer_PNR.offsetsAndSize,
    qt_meta_data_ImageViewer_PNR,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ImageViewer_PNR_t
, QtPrivate::TypeAndForceComplete<ImageViewer_PNR, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ImageViewer_PNR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageViewer_PNR::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageViewer_PNR.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ImageViewer_PNR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE