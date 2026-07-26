/****************************************************************************
** Meta object code from reading C++ file 'serialinput.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../serialinput.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialinput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
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
struct qt_meta_tag_ZN11serialInputE_t {};
} // unnamed namespace

template <> constexpr inline auto serialInput::qt_create_metaobjectdata<qt_meta_tag_ZN11serialInputE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "serialInput",
        "statusMessageReceived",
        "",
        "message",
        "uartRecordReceived",
        "GroundStationUartRecord",
        "record",
        "csvLogAvailable",
        "path",
        "readSerialData",
        "handleSerialError",
        "QSerialPort::SerialPortError",
        "error"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'statusMessageReceived'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'uartRecordReceived'
        QtMocHelpers::SignalData<void(const GroundStationUartRecord &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'csvLogAvailable'
        QtMocHelpers::SignalData<void(const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 },
        }}),
        // Slot 'readSerialData'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleSerialError'
        QtMocHelpers::SlotData<void(QSerialPort::SerialPortError)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<serialInput, qt_meta_tag_ZN11serialInputE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject serialInput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11serialInputE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11serialInputE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11serialInputE_t>.metaTypes,
    nullptr
} };

void serialInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<serialInput *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->statusMessageReceived((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->uartRecordReceived((*reinterpret_cast<std::add_pointer_t<GroundStationUartRecord>>(_a[1]))); break;
        case 2: _t->csvLogAvailable((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->readSerialData(); break;
        case 4: _t->handleSerialError((*reinterpret_cast<std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (serialInput::*)(const QString & )>(_a, &serialInput::statusMessageReceived, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (serialInput::*)(const GroundStationUartRecord & )>(_a, &serialInput::uartRecordReceived, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (serialInput::*)(const QString & )>(_a, &serialInput::csvLogAvailable, 2))
            return;
    }
}

const QMetaObject *serialInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serialInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11serialInputE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int serialInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void serialInput::statusMessageReceived(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void serialInput::uartRecordReceived(const GroundStationUartRecord & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void serialInput::csvLogAvailable(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
