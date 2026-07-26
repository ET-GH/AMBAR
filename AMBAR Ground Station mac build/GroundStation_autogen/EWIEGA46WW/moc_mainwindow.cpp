/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "pageChanged",
        "",
        "MainWindow::Page",
        "page",
        "analysisTabOpened",
        "radioEnableRequested",
        "enabled",
        "flightComputerEnableRequested",
        "airbrakesEnableRequested",
        "launchReadyChanged",
        "ready",
        "rocketOnPadChanged",
        "onPad",
        "usbPingRequested",
        "sourcePage",
        "clearMemRequested",
        "pingRequested",
        "launchSettingsLockRequested",
        "targetApogee",
        "MainWindow::AltitudeUnit",
        "unit",
        "diagnosticsRequested",
        "settingsTransmissionRequested",
        "MainWindow::InFlightSettingsUpdate",
        "update",
        "exportAllRequested",
        "importRawRequested",
        "targetApogeeEdited",
        "value",
        "manualAirbrakePercentEdited",
        "percent",
        "commandSubmitted",
        "command",
        "inputValidationError",
        "message",
        "Page",
        "PreFlight",
        "InFlight",
        "Analysis",
        "AltitudeUnit",
        "Feet",
        "Meters",
        "Kilometers"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pageChanged'
        QtMocHelpers::SignalData<void(MainWindow::Page)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'analysisTabOpened'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'radioEnableRequested'
        QtMocHelpers::SignalData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'flightComputerEnableRequested'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'airbrakesEnableRequested'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Signal 'launchReadyChanged'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'rocketOnPadChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'usbPingRequested'
        QtMocHelpers::SignalData<void(MainWindow::Page)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 15 },
        }}),
        // Signal 'clearMemRequested'
        QtMocHelpers::SignalData<void(MainWindow::Page)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 15 },
        }}),
        // Signal 'pingRequested'
        QtMocHelpers::SignalData<void(MainWindow::Page)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 15 },
        }}),
        // Signal 'launchSettingsLockRequested'
        QtMocHelpers::SignalData<void(double, MainWindow::AltitudeUnit)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 19 }, { 0x80000000 | 20, 21 },
        }}),
        // Signal 'diagnosticsRequested'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'settingsTransmissionRequested'
        QtMocHelpers::SignalData<void(const MainWindow::InFlightSettingsUpdate &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 25 },
        }}),
        // Signal 'exportAllRequested'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'importRawRequested'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'targetApogeeEdited'
        QtMocHelpers::SignalData<void(double, MainWindow::AltitudeUnit)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Double, 29 }, { 0x80000000 | 20, 21 },
        }}),
        // Signal 'manualAirbrakePercentEdited'
        QtMocHelpers::SignalData<void(int)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 31 },
        }}),
        // Signal 'commandSubmitted'
        QtMocHelpers::SignalData<void(MainWindow::Page, const QString &)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 15 }, { QMetaType::QString, 33 },
        }}),
        // Signal 'inputValidationError'
        QtMocHelpers::SignalData<void(const QString &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 35 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Page'
        QtMocHelpers::EnumData<enum Page>(36, 36, QMC::EnumIsScoped).add({
            {   37, Page::PreFlight },
            {   38, Page::InFlight },
            {   39, Page::Analysis },
        }),
        // enum 'AltitudeUnit'
        QtMocHelpers::EnumData<enum AltitudeUnit>(40, 40, QMC::EnumIsScoped).add({
            {   41, AltitudeUnit::Feet },
            {   42, AltitudeUnit::Meters },
            {   43, AltitudeUnit::Kilometers },
        }),
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pageChanged((*reinterpret_cast<std::add_pointer_t<MainWindow::Page>>(_a[1]))); break;
        case 1: _t->analysisTabOpened(); break;
        case 2: _t->radioEnableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->flightComputerEnableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->airbrakesEnableRequested((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->launchReadyChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->rocketOnPadChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->usbPingRequested((*reinterpret_cast<std::add_pointer_t<MainWindow::Page>>(_a[1]))); break;
        case 8: _t->clearMemRequested((*reinterpret_cast<std::add_pointer_t<MainWindow::Page>>(_a[1]))); break;
        case 9: _t->pingRequested((*reinterpret_cast<std::add_pointer_t<MainWindow::Page>>(_a[1]))); break;
        case 10: _t->launchSettingsLockRequested((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<MainWindow::AltitudeUnit>>(_a[2]))); break;
        case 11: _t->diagnosticsRequested(); break;
        case 12: _t->settingsTransmissionRequested((*reinterpret_cast<std::add_pointer_t<MainWindow::InFlightSettingsUpdate>>(_a[1]))); break;
        case 13: _t->exportAllRequested(); break;
        case 14: _t->importRawRequested(); break;
        case 15: _t->targetApogeeEdited((*reinterpret_cast<std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<MainWindow::AltitudeUnit>>(_a[2]))); break;
        case 16: _t->manualAirbrakePercentEdited((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->commandSubmitted((*reinterpret_cast<std::add_pointer_t<MainWindow::Page>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->inputValidationError((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< MainWindow::InFlightSettingsUpdate >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(MainWindow::Page )>(_a, &MainWindow::pageChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::analysisTabOpened, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(bool )>(_a, &MainWindow::radioEnableRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(bool )>(_a, &MainWindow::flightComputerEnableRequested, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(bool )>(_a, &MainWindow::airbrakesEnableRequested, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(bool )>(_a, &MainWindow::launchReadyChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(bool )>(_a, &MainWindow::rocketOnPadChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(MainWindow::Page )>(_a, &MainWindow::usbPingRequested, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(MainWindow::Page )>(_a, &MainWindow::clearMemRequested, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(MainWindow::Page )>(_a, &MainWindow::pingRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(double , MainWindow::AltitudeUnit )>(_a, &MainWindow::launchSettingsLockRequested, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::diagnosticsRequested, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const MainWindow::InFlightSettingsUpdate & )>(_a, &MainWindow::settingsTransmissionRequested, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::exportAllRequested, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::importRawRequested, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(double , MainWindow::AltitudeUnit )>(_a, &MainWindow::targetApogeeEdited, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(int )>(_a, &MainWindow::manualAirbrakePercentEdited, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(MainWindow::Page , const QString & )>(_a, &MainWindow::commandSubmitted, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const QString & )>(_a, &MainWindow::inputValidationError, 18))
            return;
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::pageChanged(MainWindow::Page _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MainWindow::analysisTabOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::radioEnableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void MainWindow::flightComputerEnableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void MainWindow::airbrakesEnableRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void MainWindow::launchReadyChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void MainWindow::rocketOnPadChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void MainWindow::usbPingRequested(MainWindow::Page _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void MainWindow::clearMemRequested(MainWindow::Page _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void MainWindow::pingRequested(MainWindow::Page _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void MainWindow::launchSettingsLockRequested(double _t1, MainWindow::AltitudeUnit _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2);
}

// SIGNAL 11
void MainWindow::diagnosticsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MainWindow::settingsTransmissionRequested(const MainWindow::InFlightSettingsUpdate & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void MainWindow::exportAllRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MainWindow::importRawRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MainWindow::targetApogeeEdited(double _t1, MainWindow::AltitudeUnit _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1, _t2);
}

// SIGNAL 16
void MainWindow::manualAirbrakePercentEdited(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void MainWindow::commandSubmitted(MainWindow::Page _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1, _t2);
}

// SIGNAL 18
void MainWindow::inputValidationError(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}
QT_WARNING_POP
