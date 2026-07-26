/****************************************************************************
** Meta object code from reading C++ file 'rawimportcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../rawimportcontroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rawimportcontroller.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19RawImportControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto RawImportController::qt_create_metaobjectdata<qt_meta_tag_ZN19RawImportControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "RawImportController",
        "importCompleted",
        "",
        "csvPath",
        "importFailed",
        "message",
        "startImport",
        "attemptConnection",
        "cancelImport",
        "handleConnectionOpened",
        "name",
        "handleDeviceVerified",
        "handleArchiveRecord",
        "recordsReceived",
        "csvBytesWritten",
        "handleCommandAcknowledged",
        "sequence",
        "command",
        "detail",
        "handleCommandRejected",
        "result",
        "handleTransportError",
        "handleProtocolError",
        "handleCsvError",
        "handleDisconnected",
        "handleCommandTimeout",
        "handleFirstRecordTimeout",
        "handleArchiveIdle",
        "updateTimeDisplay"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'importCompleted'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'importFailed'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'startImport'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'attemptConnection'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cancelImport'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleConnectionOpened'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'handleDeviceVerified'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'handleArchiveRecord'
        QtMocHelpers::SlotData<void(quint64, qint64)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::ULongLong, 13 }, { QMetaType::LongLong, 14 },
        }}),
        // Slot 'handleCommandAcknowledged'
        QtMocHelpers::SlotData<void(quint16, quint8, quint16)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UShort, 16 }, { QMetaType::UChar, 17 }, { QMetaType::UShort, 18 },
        }}),
        // Slot 'handleCommandRejected'
        QtMocHelpers::SlotData<void(quint16, quint8, quint8, quint16)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UShort, 16 }, { QMetaType::UChar, 17 }, { QMetaType::UChar, 20 }, { QMetaType::UShort, 18 },
        }}),
        // Slot 'handleTransportError'
        QtMocHelpers::SlotData<void(const QString &)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'handleProtocolError'
        QtMocHelpers::SlotData<void(const QString &)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'handleCsvError'
        QtMocHelpers::SlotData<void(const QString &)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'handleDisconnected'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'handleCommandTimeout'
        QtMocHelpers::SlotData<void(quint16, quint8)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UShort, 16 }, { QMetaType::UChar, 17 },
        }}),
        // Slot 'handleFirstRecordTimeout'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleArchiveIdle'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateTimeDisplay'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<RawImportController, qt_meta_tag_ZN19RawImportControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject RawImportController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19RawImportControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19RawImportControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19RawImportControllerE_t>.metaTypes,
    nullptr
} };

void RawImportController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<RawImportController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->importCompleted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->importFailed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->startImport(); break;
        case 3: _t->attemptConnection(); break;
        case 4: _t->cancelImport(); break;
        case 5: _t->handleConnectionOpened((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->handleDeviceVerified((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->handleArchiveRecord((*reinterpret_cast<std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2]))); break;
        case 8: _t->handleCommandAcknowledged((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint16>>(_a[3]))); break;
        case 9: _t->handleCommandRejected((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<quint16>>(_a[4]))); break;
        case 10: _t->handleTransportError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->handleProtocolError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->handleCsvError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->handleDisconnected((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->handleCommandTimeout((*reinterpret_cast<std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<quint8>>(_a[2]))); break;
        case 15: _t->handleFirstRecordTimeout(); break;
        case 16: _t->handleArchiveIdle(); break;
        case 17: _t->updateTimeDisplay(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (RawImportController::*)(const QString & )>(_a, &RawImportController::importCompleted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (RawImportController::*)(const QString & )>(_a, &RawImportController::importFailed, 1))
            return;
    }
}

const QMetaObject *RawImportController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RawImportController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19RawImportControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RawImportController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void RawImportController::importCompleted(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void RawImportController::importFailed(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
