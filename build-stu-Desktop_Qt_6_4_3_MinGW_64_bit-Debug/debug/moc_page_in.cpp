/****************************************************************************
** Meta object code from reading C++ file 'page_in.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../stu/page_in.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page_in.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Page_in_t {
    uint offsetsAndSizes[14];
    char stringdata0[8];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[16];
    char stringdata5[21];
    char stringdata6[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Page_in_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Page_in_t qt_meta_stringdata_Page_in = {
    {
        QT_MOC_LITERAL(0, 7),  // "Page_in"
        QT_MOC_LITERAL(8, 15),  // "sendDiagSuccess"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 13),  // "on_up_clicked"
        QT_MOC_LITERAL(39, 15),  // "on_diag_clicked"
        QT_MOC_LITERAL(55, 20),  // "on_warehouse_clicked"
        QT_MOC_LITERAL(76, 14)   // "on_cut_clicked"
    },
    "Page_in",
    "sendDiagSuccess",
    "",
    "on_up_clicked",
    "on_diag_clicked",
    "on_warehouse_clicked",
    "on_cut_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Page_in[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Page_in::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Page_in.offsetsAndSizes,
    qt_meta_data_Page_in,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Page_in_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Page_in, std::true_type>,
        // method 'sendDiagSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_up_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_diag_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_warehouse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cut_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Page_in::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Page_in *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendDiagSuccess(); break;
        case 1: _t->on_up_clicked(); break;
        case 2: _t->on_diag_clicked(); break;
        case 3: _t->on_warehouse_clicked(); break;
        case 4: _t->on_cut_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Page_in::*)();
            if (_t _q_method = &Page_in::sendDiagSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Page_in::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Page_in::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Page_in.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Page_in::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Page_in::sendDiagSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
