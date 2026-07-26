/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *preFlight;
    QLabel *tApogeeLabel;
    QRadioButton *enableRadio;
    QLabel *console1Label;
    QRadioButton *LaunchReadyButt;
    QComboBox *tApogeeUnit;
    QRadioButton *enableAirBrakeButt;
    QRadioButton *EnableFlightcomButt;
    QPushButton *ping1;
    QLabel *radioStatus;
    QLineEdit *tApogeeIn;
    QRadioButton *onPadButt;
    QPushButton *lockLaunch;
    QPlainTextEdit *preConsole;
    QLineEdit *commandInput;
    QPushButton *sendCommand;
    QPushButton *ping1_USB;
    QPushButton *ClearMem;
    QWidget *inFlight;
    QWidget *graphArea;
    QRadioButton *enableAirBrakeButt_2;
    QRadioButton *EnableFlightcomButt_2;
    QRadioButton *enableRadio_2;
    QPushButton *ping1_2;
    QLabel *radioStatus_2;
    QLineEdit *deployPercent;
    QComboBox *tApogeeUnit_2;
    QLineEdit *tApogeeIn_2;
    QLabel *tApogeeLabel_2;
    QLabel *manualAirbrakeLabel;
    QLabel *percentSymbol;
    QPushButton *reqDiagnostic;
    QPushButton *transmitSettings;
    QLabel *console1Label_2;
    QPlainTextEdit *flightConsole;
    QPushButton *sendCommand_2;
    QLineEdit *commandInput_2;
    QWidget *analysis;
    QPushButton *exportAll;
    QPushButton *importRaw;
    QLabel *statusTitle;
    QLabel *peakApogee;
    QLabel *deltaApogee;
    QLabel *deployStateLabel;
    QLabel *errCountsLabel;
    QLabel *peakApogeeVal;
    QLabel *deltaApogeeVal;
    QLabel *deployState;
    QLabel *errCounts;
    QWidget *graph1;
    QWidget *graph2;
    QWidget *graph3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 601);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 801, 531));
        tabWidget->setUsesScrollButtons(false);
        preFlight = new QWidget();
        preFlight->setObjectName("preFlight");
        tApogeeLabel = new QLabel(preFlight);
        tApogeeLabel->setObjectName("tApogeeLabel");
        tApogeeLabel->setGeometry(QRect(20, 100, 91, 16));
        enableRadio = new QRadioButton(preFlight);
        enableRadio->setObjectName("enableRadio");
        enableRadio->setGeometry(QRect(20, 10, 99, 20));
        enableRadio->setChecked(true);
        enableRadio->setAutoExclusive(false);
        console1Label = new QLabel(preFlight);
        console1Label->setObjectName("console1Label");
        console1Label->setGeometry(QRect(240, 10, 91, 16));
        LaunchReadyButt = new QRadioButton(preFlight);
        LaunchReadyButt->setObjectName("LaunchReadyButt");
        LaunchReadyButt->setGeometry(QRect(20, 230, 121, 20));
        LaunchReadyButt->setChecked(true);
        LaunchReadyButt->setAutoExclusive(false);
        tApogeeUnit = new QComboBox(preFlight);
        tApogeeUnit->addItem(QString());
        tApogeeUnit->addItem(QString());
        tApogeeUnit->addItem(QString());
        tApogeeUnit->setObjectName("tApogeeUnit");
        tApogeeUnit->setGeometry(QRect(140, 120, 71, 32));
        enableAirBrakeButt = new QRadioButton(preFlight);
        enableAirBrakeButt->setObjectName("enableAirBrakeButt");
        enableAirBrakeButt->setGeometry(QRect(20, 200, 121, 20));
        enableAirBrakeButt->setChecked(true);
        enableAirBrakeButt->setAutoExclusive(false);
        EnableFlightcomButt = new QRadioButton(preFlight);
        EnableFlightcomButt->setObjectName("EnableFlightcomButt");
        EnableFlightcomButt->setGeometry(QRect(20, 170, 161, 20));
        EnableFlightcomButt->setChecked(true);
        EnableFlightcomButt->setAutoExclusive(false);
        ping1 = new QPushButton(preFlight);
        ping1->setObjectName("ping1");
        ping1->setGeometry(QRect(20, 60, 100, 32));
        radioStatus = new QLabel(preFlight);
        radioStatus->setObjectName("radioStatus");
        radioStatus->setGeometry(QRect(20, 40, 101, 16));
        tApogeeIn = new QLineEdit(preFlight);
        tApogeeIn->setObjectName("tApogeeIn");
        tApogeeIn->setGeometry(QRect(20, 120, 113, 31));
        tApogeeIn->setClearButtonEnabled(false);
        onPadButt = new QRadioButton(preFlight);
        onPadButt->setObjectName("onPadButt");
        onPadButt->setGeometry(QRect(20, 260, 71, 20));
        onPadButt->setChecked(false);
        onPadButt->setAutoExclusive(false);
        lockLaunch = new QPushButton(preFlight);
        lockLaunch->setObjectName("lockLaunch");
        lockLaunch->setEnabled(false);
        lockLaunch->setGeometry(QRect(20, 390, 191, 81));
        preConsole = new QPlainTextEdit(preFlight);
        preConsole->setObjectName("preConsole");
        preConsole->setGeometry(QRect(240, 30, 521, 391));
        preConsole->setReadOnly(true);
        commandInput = new QLineEdit(preFlight);
        commandInput->setObjectName("commandInput");
        commandInput->setGeometry(QRect(241, 430, 401, 31));
        sendCommand = new QPushButton(preFlight);
        sendCommand->setObjectName("sendCommand");
        sendCommand->setGeometry(QRect(650, 430, 111, 32));
        ping1_USB = new QPushButton(preFlight);
        ping1_USB->setObjectName("ping1_USB");
        ping1_USB->setGeometry(QRect(20, 290, 100, 32));
        ClearMem = new QPushButton(preFlight);
        ClearMem->setObjectName("ClearMem");
        ClearMem->setGeometry(QRect(20, 320, 101, 32));
        tabWidget->addTab(preFlight, QString());
        inFlight = new QWidget();
        inFlight->setObjectName("inFlight");
        graphArea = new QWidget(inFlight);
        graphArea->setObjectName("graphArea");
        graphArea->setGeometry(QRect(240, 20, 521, 271));
        enableAirBrakeButt_2 = new QRadioButton(inFlight);
        enableAirBrakeButt_2->setObjectName("enableAirBrakeButt_2");
        enableAirBrakeButt_2->setGeometry(QRect(20, 200, 121, 20));
        enableAirBrakeButt_2->setAutoExclusive(false);
        EnableFlightcomButt_2 = new QRadioButton(inFlight);
        EnableFlightcomButt_2->setObjectName("EnableFlightcomButt_2");
        EnableFlightcomButt_2->setGeometry(QRect(20, 170, 161, 20));
        EnableFlightcomButt_2->setAutoExclusive(false);
        enableRadio_2 = new QRadioButton(inFlight);
        enableRadio_2->setObjectName("enableRadio_2");
        enableRadio_2->setGeometry(QRect(20, 10, 99, 20));
        enableRadio_2->setAutoExclusive(false);
        ping1_2 = new QPushButton(inFlight);
        ping1_2->setObjectName("ping1_2");
        ping1_2->setGeometry(QRect(20, 60, 100, 32));
        radioStatus_2 = new QLabel(inFlight);
        radioStatus_2->setObjectName("radioStatus_2");
        radioStatus_2->setGeometry(QRect(20, 40, 101, 16));
        deployPercent = new QLineEdit(inFlight);
        deployPercent->setObjectName("deployPercent");
        deployPercent->setGeometry(QRect(20, 250, 51, 31));
        tApogeeUnit_2 = new QComboBox(inFlight);
        tApogeeUnit_2->addItem(QString());
        tApogeeUnit_2->addItem(QString());
        tApogeeUnit_2->addItem(QString());
        tApogeeUnit_2->setObjectName("tApogeeUnit_2");
        tApogeeUnit_2->setGeometry(QRect(140, 120, 71, 32));
        tApogeeIn_2 = new QLineEdit(inFlight);
        tApogeeIn_2->setObjectName("tApogeeIn_2");
        tApogeeIn_2->setGeometry(QRect(20, 120, 113, 31));
        tApogeeIn_2->setClearButtonEnabled(false);
        tApogeeLabel_2 = new QLabel(inFlight);
        tApogeeLabel_2->setObjectName("tApogeeLabel_2");
        tApogeeLabel_2->setGeometry(QRect(20, 100, 91, 16));
        manualAirbrakeLabel = new QLabel(inFlight);
        manualAirbrakeLabel->setObjectName("manualAirbrakeLabel");
        manualAirbrakeLabel->setGeometry(QRect(20, 230, 101, 16));
        percentSymbol = new QLabel(inFlight);
        percentSymbol->setObjectName("percentSymbol");
        percentSymbol->setGeometry(QRect(70, 250, 16, 31));
        reqDiagnostic = new QPushButton(inFlight);
        reqDiagnostic->setObjectName("reqDiagnostic");
        reqDiagnostic->setGeometry(QRect(20, 350, 191, 41));
        transmitSettings = new QPushButton(inFlight);
        transmitSettings->setObjectName("transmitSettings");
        transmitSettings->setGeometry(QRect(20, 400, 191, 81));
        console1Label_2 = new QLabel(inFlight);
        console1Label_2->setObjectName("console1Label_2");
        console1Label_2->setGeometry(QRect(240, 300, 91, 16));
        flightConsole = new QPlainTextEdit(inFlight);
        flightConsole->setObjectName("flightConsole");
        flightConsole->setGeometry(QRect(240, 320, 521, 121));
        flightConsole->setReadOnly(true);
        sendCommand_2 = new QPushButton(inFlight);
        sendCommand_2->setObjectName("sendCommand_2");
        sendCommand_2->setGeometry(QRect(640, 450, 111, 32));
        commandInput_2 = new QLineEdit(inFlight);
        commandInput_2->setObjectName("commandInput_2");
        commandInput_2->setGeometry(QRect(240, 450, 391, 31));
        tabWidget->addTab(inFlight, QString());
        analysis = new QWidget();
        analysis->setObjectName("analysis");
        exportAll = new QPushButton(analysis);
        exportAll->setObjectName("exportAll");
        exportAll->setGeometry(QRect(20, 50, 141, 61));
        importRaw = new QPushButton(analysis);
        importRaw->setObjectName("importRaw");
        importRaw->setGeometry(QRect(20, 120, 141, 61));
        statusTitle = new QLabel(analysis);
        statusTitle->setObjectName("statusTitle");
        statusTitle->setGeometry(QRect(20, 10, 371, 41));
        QFont font;
        font.setPointSize(21);
        statusTitle->setFont(font);
        peakApogee = new QLabel(analysis);
        peakApogee->setObjectName("peakApogee");
        peakApogee->setGeometry(QRect(180, 60, 81, 16));
        deltaApogee = new QLabel(analysis);
        deltaApogee->setObjectName("deltaApogee");
        deltaApogee->setGeometry(QRect(200, 90, 61, 20));
        deployStateLabel = new QLabel(analysis);
        deployStateLabel->setObjectName("deployStateLabel");
        deployStateLabel->setGeometry(QRect(180, 120, 81, 20));
        errCountsLabel = new QLabel(analysis);
        errCountsLabel->setObjectName("errCountsLabel");
        errCountsLabel->setGeometry(QRect(190, 150, 71, 20));
        peakApogeeVal = new QLabel(analysis);
        peakApogeeVal->setObjectName("peakApogeeVal");
        peakApogeeVal->setGeometry(QRect(270, 60, 61, 16));
        deltaApogeeVal = new QLabel(analysis);
        deltaApogeeVal->setObjectName("deltaApogeeVal");
        deltaApogeeVal->setGeometry(QRect(270, 90, 61, 16));
        deployState = new QLabel(analysis);
        deployState->setObjectName("deployState");
        deployState->setGeometry(QRect(270, 120, 51, 16));
        errCounts = new QLabel(analysis);
        errCounts->setObjectName("errCounts");
        errCounts->setGeometry(QRect(270, 150, 51, 16));
        graph1 = new QWidget(analysis);
        graph1->setObjectName("graph1");
        graph1->setGeometry(QRect(20, 200, 341, 281));
        graph2 = new QWidget(analysis);
        graph2->setObjectName("graph2");
        graph2->setGeometry(QRect(390, 250, 361, 221));
        graph3 = new QWidget(analysis);
        graph3->setObjectName("graph3");
        graph3->setGeometry(QRect(390, 10, 361, 221));
        tabWidget->addTab(analysis, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tApogeeLabel->setText(QCoreApplication::translate("MainWindow", "Target Apogee", nullptr));
        enableRadio->setText(QCoreApplication::translate("MainWindow", "Enable Radio", nullptr));
        console1Label->setText(QCoreApplication::translate("MainWindow", "Status Console", nullptr));
        LaunchReadyButt->setText(QCoreApplication::translate("MainWindow", "Launch Ready", nullptr));
        tApogeeUnit->setItemText(0, QCoreApplication::translate("MainWindow", "ft", nullptr));
        tApogeeUnit->setItemText(1, QCoreApplication::translate("MainWindow", "m", nullptr));
        tApogeeUnit->setItemText(2, QCoreApplication::translate("MainWindow", "km", nullptr));

        enableAirBrakeButt->setText(QCoreApplication::translate("MainWindow", "Enable Airbrakes", nullptr));
        EnableFlightcomButt->setText(QCoreApplication::translate("MainWindow", "Enable Flight Computer", nullptr));
        ping1->setText(QCoreApplication::translate("MainWindow", "Ping", nullptr));
        radioStatus->setText(QCoreApplication::translate("MainWindow", "Radio Connected", nullptr));
        tApogeeIn->setText(QString());
        tApogeeIn->setPlaceholderText(QCoreApplication::translate("MainWindow", "5000", nullptr));
        onPadButt->setText(QCoreApplication::translate("MainWindow", "On Pad", nullptr));
        lockLaunch->setText(QCoreApplication::translate("MainWindow", "Lock Launch Settings", nullptr));
        sendCommand->setText(QCoreApplication::translate("MainWindow", "Send Command", nullptr));
        ping1_USB->setText(QCoreApplication::translate("MainWindow", "USB Ping", nullptr));
        ClearMem->setText(QCoreApplication::translate("MainWindow", "Clear Memory", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(preFlight), QCoreApplication::translate("MainWindow", "Pre-Flight", nullptr));
        enableAirBrakeButt_2->setText(QCoreApplication::translate("MainWindow", "Enable Airbrakes", nullptr));
        EnableFlightcomButt_2->setText(QCoreApplication::translate("MainWindow", "Enable Flight Computer", nullptr));
        enableRadio_2->setText(QCoreApplication::translate("MainWindow", "Enable Radio", nullptr));
        ping1_2->setText(QCoreApplication::translate("MainWindow", "Ping", nullptr));
        radioStatus_2->setText(QCoreApplication::translate("MainWindow", "Radio Connected", nullptr));
        deployPercent->setText(QString());
        tApogeeUnit_2->setItemText(0, QCoreApplication::translate("MainWindow", "ft", nullptr));
        tApogeeUnit_2->setItemText(1, QCoreApplication::translate("MainWindow", "m", nullptr));
        tApogeeUnit_2->setItemText(2, QCoreApplication::translate("MainWindow", "km", nullptr));

        tApogeeIn_2->setText(QString());
        tApogeeIn_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "5000", nullptr));
        tApogeeLabel_2->setText(QCoreApplication::translate("MainWindow", "Target Apogee", nullptr));
        manualAirbrakeLabel->setText(QCoreApplication::translate("MainWindow", "Manual Airbrake", nullptr));
        percentSymbol->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        reqDiagnostic->setText(QCoreApplication::translate("MainWindow", "Request Diagnostics", nullptr));
        transmitSettings->setText(QCoreApplication::translate("MainWindow", "Transmit Settings", nullptr));
        console1Label_2->setText(QCoreApplication::translate("MainWindow", "Status Console", nullptr));
        sendCommand_2->setText(QCoreApplication::translate("MainWindow", "Send Command", nullptr));
        commandInput_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "to abort mission, type \"ABORT\", send, then follow the promts", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(inFlight), QCoreApplication::translate("MainWindow", "In Flight", nullptr));
        exportAll->setText(QCoreApplication::translate("MainWindow", "Export All", nullptr));
        importRaw->setText(QCoreApplication::translate("MainWindow", "Import Raw", nullptr));
        statusTitle->setText(QCoreApplication::translate("MainWindow", "Flight Complete", nullptr));
        peakApogee->setText(QCoreApplication::translate("MainWindow", "Peak Apogee:", nullptr));
        deltaApogee->setText(QCoreApplication::translate("MainWindow", "\316\224 Apogee:", nullptr));
        deployStateLabel->setText(QCoreApplication::translate("MainWindow", " Deployment:", nullptr));
        errCountsLabel->setText(QCoreApplication::translate("MainWindow", "Error Count:", nullptr));
        peakApogeeVal->setText(QCoreApplication::translate("MainWindow", "1000 m", nullptr));
        deltaApogeeVal->setText(QCoreApplication::translate("MainWindow", "+10 m", nullptr));
        deployState->setText(QCoreApplication::translate("MainWindow", "True", nullptr));
        errCounts->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(analysis), QCoreApplication::translate("MainWindow", "Analysis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
