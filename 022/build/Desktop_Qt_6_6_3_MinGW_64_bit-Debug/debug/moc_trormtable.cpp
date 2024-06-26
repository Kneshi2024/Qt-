/****************************************************************************
** Meta object code from reading C++ file 'trormtable.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../trormtable.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trormtable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTFormTableENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSTFormTableENDCLASS = QtMocHelpers::stringData(
    "TFormTable",
    "cellTextChanged",
    "",
    "row",
    "col",
    "on_action_setRowColNum_triggered",
    "on_action_setHeader_triggered",
    "on_action_locateItem_triggered",
    "do_valueChanged",
    "QString&",
    "text",
    "on_tableView_clicked",
    "QModelIndex",
    "index",
    "do_setLabelText",
    "current",
    "previous"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTFormTableENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[4];
    char stringdata5[33];
    char stringdata6[30];
    char stringdata7[31];
    char stringdata8[16];
    char stringdata9[9];
    char stringdata10[5];
    char stringdata11[21];
    char stringdata12[12];
    char stringdata13[6];
    char stringdata14[16];
    char stringdata15[8];
    char stringdata16[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTFormTableENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTFormTableENDCLASS_t qt_meta_stringdata_CLASSTFormTableENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "TFormTable"
        QT_MOC_LITERAL(11, 15),  // "cellTextChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 3),  // "row"
        QT_MOC_LITERAL(32, 3),  // "col"
        QT_MOC_LITERAL(36, 32),  // "on_action_setRowColNum_triggered"
        QT_MOC_LITERAL(69, 29),  // "on_action_setHeader_triggered"
        QT_MOC_LITERAL(99, 30),  // "on_action_locateItem_triggered"
        QT_MOC_LITERAL(130, 15),  // "do_valueChanged"
        QT_MOC_LITERAL(146, 8),  // "QString&"
        QT_MOC_LITERAL(155, 4),  // "text"
        QT_MOC_LITERAL(160, 20),  // "on_tableView_clicked"
        QT_MOC_LITERAL(181, 11),  // "QModelIndex"
        QT_MOC_LITERAL(193, 5),  // "index"
        QT_MOC_LITERAL(199, 15),  // "do_setLabelText"
        QT_MOC_LITERAL(215, 7),  // "current"
        QT_MOC_LITERAL(223, 8)   // "previous"
    },
    "TFormTable",
    "cellTextChanged",
    "",
    "row",
    "col",
    "on_action_setRowColNum_triggered",
    "on_action_setHeader_triggered",
    "on_action_locateItem_triggered",
    "do_valueChanged",
    "QString&",
    "text",
    "on_tableView_clicked",
    "QModelIndex",
    "index",
    "do_setLabelText",
    "current",
    "previous"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTFormTableENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   61,    2, 0x08,    4 /* Private */,
       6,    0,   62,    2, 0x08,    5 /* Private */,
       7,    0,   63,    2, 0x08,    6 /* Private */,
       8,    3,   64,    2, 0x08,    7 /* Private */,
      11,    1,   71,    2, 0x08,   11 /* Private */,
      14,    2,   74,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 9,    3,    4,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject TFormTable::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSTFormTableENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTFormTableENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTFormTableENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TFormTable, std::true_type>,
        // method 'cellTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_action_setRowColNum_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_setHeader_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_locateItem_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'do_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'on_tableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'do_setLabelText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void TFormTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TFormTable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cellTextChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_action_setRowColNum_triggered(); break;
        case 2: _t->on_action_setHeader_triggered(); break;
        case 3: _t->on_action_locateItem_triggered(); break;
        case 4: _t->do_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[3]))); break;
        case 5: _t->on_tableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->do_setLabelText((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TFormTable::*)(int , int );
            if (_t _q_method = &TFormTable::cellTextChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *TFormTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TFormTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTFormTableENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TFormTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TFormTable::cellTextChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
