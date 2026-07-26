/********************************************************************************
** Form generated from reading UI file 'importdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTDIALOG_H
#define UI_IMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_importDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *ConnectionStatus;
    QLabel *label_2;
    QProgressBar *progressBar;
    QLabel *sizeLabel;
    QLabel *ttDoneLabel;
    QLabel *dataSize;
    QLabel *timeUntil;

    void setupUi(QDialog *importDialog)
    {
        if (importDialog->objectName().isEmpty())
            importDialog->setObjectName("importDialog");
        importDialog->resize(433, 239);
        buttonBox = new QDialogButtonBox(importDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 190, 381, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Close);
        ConnectionStatus = new QLabel(importDialog);
        ConnectionStatus->setObjectName("ConnectionStatus");
        ConnectionStatus->setGeometry(QRect(20, 20, 391, 16));
        label_2 = new QLabel(importDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 160, 401, 16));
        progressBar = new QProgressBar(importDialog);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(20, 120, 391, 21));
        progressBar->setValue(24);
        sizeLabel = new QLabel(importDialog);
        sizeLabel->setObjectName("sizeLabel");
        sizeLabel->setGeometry(QRect(20, 50, 31, 16));
        ttDoneLabel = new QLabel(importDialog);
        ttDoneLabel->setObjectName("ttDoneLabel");
        ttDoneLabel->setGeometry(QRect(20, 80, 131, 16));
        dataSize = new QLabel(importDialog);
        dataSize->setObjectName("dataSize");
        dataSize->setGeometry(QRect(180, 50, 58, 16));
        dataSize->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        timeUntil = new QLabel(importDialog);
        timeUntil->setObjectName("timeUntil");
        timeUntil->setGeometry(QRect(177, 80, 61, 16));
        timeUntil->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(importDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, importDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, importDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(importDialog);
    } // setupUi

    void retranslateUi(QDialog *importDialog)
    {
        importDialog->setWindowTitle(QCoreApplication::translate("importDialog", "Dialog", nullptr));
        ConnectionStatus->setText(QCoreApplication::translate("importDialog", "Flight Computer Found!", nullptr));
        label_2->setText(QCoreApplication::translate("importDialog", "Please connect the flight computer to start importing data", nullptr));
        sizeLabel->setText(QCoreApplication::translate("importDialog", "Size:", nullptr));
        ttDoneLabel->setText(QCoreApplication::translate("importDialog", "Time Until Complete:", nullptr));
        dataSize->setText(QCoreApplication::translate("importDialog", "100 Mb", nullptr));
        timeUntil->setText(QCoreApplication::translate("importDialog", "30 s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class importDialog: public Ui_importDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTDIALOG_H
