/********************************************************************************
** Form generated from reading UI file 'acceptlicensedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCEPTLICENSEDIALOG_H
#define UI_ACCEPTLICENSEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AcceptLicenseDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *licenseTextBrowser;
    QLabel *promptLabel;

    void setupUi(QDialog *AcceptLicenseDialog)
    {
        if (AcceptLicenseDialog->objectName().isEmpty())
            AcceptLicenseDialog->setObjectName(QStringLiteral("AcceptLicenseDialog"));
        AcceptLicenseDialog->resize(738, 488);
        buttonBox = new QDialogButtonBox(AcceptLicenseDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(360, 440, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Yes);
        licenseTextBrowser = new QTextBrowser(AcceptLicenseDialog);
        licenseTextBrowser->setObjectName(QStringLiteral("licenseTextBrowser"));
        licenseTextBrowser->setGeometry(QRect(10, 10, 721, 411));
        promptLabel = new QLabel(AcceptLicenseDialog);
        promptLabel->setObjectName(QStringLiteral("promptLabel"));
        promptLabel->setGeometry(QRect(30, 450, 281, 16));

        retranslateUi(AcceptLicenseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AcceptLicenseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AcceptLicenseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AcceptLicenseDialog);
    } // setupUi

    void retranslateUi(QDialog *AcceptLicenseDialog)
    {
        AcceptLicenseDialog->setWindowTitle(QApplication::translate("AcceptLicenseDialog", "End-user License Agreement", 0));
        promptLabel->setText(QApplication::translate("AcceptLicenseDialog", "Do you accept these terms and conditions?", 0));
    } // retranslateUi

};

namespace Ui {
    class AcceptLicenseDialog: public Ui_AcceptLicenseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCEPTLICENSEDIALOG_H
