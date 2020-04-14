/********************************************************************************
** Form generated from reading UI file 'requestpaymentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTPAYMENTDIALOG_H
#define UI_REQUESTPAYMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RequestPaymentDialog
{
public:
    QGroupBox *RequestPaymentBox;
    QLabel *accountLabel;
    QComboBox *accountComboBox;
    QLineEdit *invoiceLineEdit;
    QLabel *invoiceLabelLabel;
    QLabel *invoiceAmountLabel;
    QLineEdit *invoiceAmountLineEdit;
    QPushButton *newInvoiceButton;
    QGroupBox *InvoiceDetailsBox;
    QLabel *invoiceDetailsLabel_4;
    QLabel *invoiceDetailsLabel_3;
    QLabel *invoiceDetailsLabel_2;
    QLineEdit *invoiceDetailsLabelLineEdit;
    QLabel *invoiceDetailsLabel;
    QLineEdit *invoiceDetailsUrlLineEdit;
    QLineEdit *invoiceDetailsScriptLineEdit;
    QLineEdit *invoiceDetailsAddressLineEdit;
    QPushButton *addressClipboardButton;
    QPushButton *scriptClipboardButton;
    QPushButton *urlClipboardButton;
    QPushButton *closeButton;
    QLabel *qrLabel;

    void setupUi(QDialog *RequestPaymentDialog)
    {
        if (RequestPaymentDialog->objectName().isEmpty())
            RequestPaymentDialog->setObjectName(QStringLiteral("RequestPaymentDialog"));
        RequestPaymentDialog->resize(721, 507);
        RequestPaymentBox = new QGroupBox(RequestPaymentDialog);
        RequestPaymentBox->setObjectName(QStringLiteral("RequestPaymentBox"));
        RequestPaymentBox->setGeometry(QRect(15, 11, 351, 231));
        accountLabel = new QLabel(RequestPaymentBox);
        accountLabel->setObjectName(QStringLiteral("accountLabel"));
        accountLabel->setGeometry(QRect(22, 44, 56, 16));
        accountComboBox = new QComboBox(RequestPaymentBox);
        accountComboBox->setObjectName(QStringLiteral("accountComboBox"));
        accountComboBox->setGeometry(QRect(150, 40, 171, 26));
        invoiceLineEdit = new QLineEdit(RequestPaymentBox);
        invoiceLineEdit->setObjectName(QStringLiteral("invoiceLineEdit"));
        invoiceLineEdit->setGeometry(QRect(150, 84, 171, 21));
        invoiceLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        invoiceLabelLabel = new QLabel(RequestPaymentBox);
        invoiceLabelLabel->setObjectName(QStringLiteral("invoiceLabelLabel"));
        invoiceLabelLabel->setGeometry(QRect(20, 86, 86, 16));
        invoiceAmountLabel = new QLabel(RequestPaymentBox);
        invoiceAmountLabel->setObjectName(QStringLiteral("invoiceAmountLabel"));
        invoiceAmountLabel->setGeometry(QRect(20, 129, 103, 16));
        invoiceAmountLineEdit = new QLineEdit(RequestPaymentBox);
        invoiceAmountLineEdit->setObjectName(QStringLiteral("invoiceAmountLineEdit"));
        invoiceAmountLineEdit->setGeometry(QRect(150, 126, 171, 21));
        invoiceAmountLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        newInvoiceButton = new QPushButton(RequestPaymentBox);
        newInvoiceButton->setObjectName(QStringLiteral("newInvoiceButton"));
        newInvoiceButton->setGeometry(QRect(180, 180, 131, 32));
        InvoiceDetailsBox = new QGroupBox(RequestPaymentDialog);
        InvoiceDetailsBox->setObjectName(QStringLiteral("InvoiceDetailsBox"));
        InvoiceDetailsBox->setGeometry(QRect(13, 269, 661, 181));
        invoiceDetailsLabel_4 = new QLabel(InvoiceDetailsBox);
        invoiceDetailsLabel_4->setObjectName(QStringLiteral("invoiceDetailsLabel_4"));
        invoiceDetailsLabel_4->setGeometry(QRect(16, 137, 29, 16));
        invoiceDetailsLabel_3 = new QLabel(InvoiceDetailsBox);
        invoiceDetailsLabel_3->setObjectName(QStringLiteral("invoiceDetailsLabel_3"));
        invoiceDetailsLabel_3->setGeometry(QRect(16, 107, 40, 16));
        invoiceDetailsLabel_2 = new QLabel(InvoiceDetailsBox);
        invoiceDetailsLabel_2->setObjectName(QStringLiteral("invoiceDetailsLabel_2"));
        invoiceDetailsLabel_2->setGeometry(QRect(16, 75, 56, 16));
        invoiceDetailsLabelLineEdit = new QLineEdit(InvoiceDetailsBox);
        invoiceDetailsLabelLineEdit->setObjectName(QStringLiteral("invoiceDetailsLabelLineEdit"));
        invoiceDetailsLabelLineEdit->setGeometry(QRect(80, 40, 401, 21));
        invoiceDetailsLabelLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        invoiceDetailsLabelLineEdit->setReadOnly(true);
        invoiceDetailsLabel = new QLabel(InvoiceDetailsBox);
        invoiceDetailsLabel->setObjectName(QStringLiteral("invoiceDetailsLabel"));
        invoiceDetailsLabel->setGeometry(QRect(17, 41, 38, 21));
        invoiceDetailsUrlLineEdit = new QLineEdit(InvoiceDetailsBox);
        invoiceDetailsUrlLineEdit->setObjectName(QStringLiteral("invoiceDetailsUrlLineEdit"));
        invoiceDetailsUrlLineEdit->setGeometry(QRect(80, 135, 401, 21));
        invoiceDetailsUrlLineEdit->setMaxLength(32767);
        invoiceDetailsUrlLineEdit->setFrame(true);
        invoiceDetailsUrlLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        invoiceDetailsUrlLineEdit->setReadOnly(true);
        invoiceDetailsScriptLineEdit = new QLineEdit(InvoiceDetailsBox);
        invoiceDetailsScriptLineEdit->setObjectName(QStringLiteral("invoiceDetailsScriptLineEdit"));
        invoiceDetailsScriptLineEdit->setGeometry(QRect(80, 104, 401, 21));
        invoiceDetailsScriptLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        invoiceDetailsScriptLineEdit->setReadOnly(true);
        invoiceDetailsAddressLineEdit = new QLineEdit(InvoiceDetailsBox);
        invoiceDetailsAddressLineEdit->setObjectName(QStringLiteral("invoiceDetailsAddressLineEdit"));
        invoiceDetailsAddressLineEdit->setGeometry(QRect(80, 72, 401, 21));
        invoiceDetailsAddressLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        invoiceDetailsAddressLineEdit->setReadOnly(true);
        addressClipboardButton = new QPushButton(InvoiceDetailsBox);
        addressClipboardButton->setObjectName(QStringLiteral("addressClipboardButton"));
        addressClipboardButton->setGeometry(QRect(490, 70, 160, 32));
        scriptClipboardButton = new QPushButton(InvoiceDetailsBox);
        scriptClipboardButton->setObjectName(QStringLiteral("scriptClipboardButton"));
        scriptClipboardButton->setGeometry(QRect(490, 103, 160, 32));
        urlClipboardButton = new QPushButton(InvoiceDetailsBox);
        urlClipboardButton->setObjectName(QStringLiteral("urlClipboardButton"));
        urlClipboardButton->setGeometry(QRect(490, 133, 160, 32));
        closeButton = new QPushButton(RequestPaymentDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(560, 460, 114, 32));
        qrLabel = new QLabel(RequestPaymentDialog);
        qrLabel->setObjectName(QStringLiteral("qrLabel"));
        qrLabel->setGeometry(QRect(420, 30, 241, 241));

        retranslateUi(RequestPaymentDialog);

        QMetaObject::connectSlotsByName(RequestPaymentDialog);
    } // setupUi

    void retranslateUi(QDialog *RequestPaymentDialog)
    {
        RequestPaymentDialog->setWindowTitle(QApplication::translate("RequestPaymentDialog", "Request Payment", 0));
        RequestPaymentBox->setTitle(QApplication::translate("RequestPaymentDialog", "Request Payment", 0));
        accountLabel->setText(QApplication::translate("RequestPaymentDialog", "Account:", 0));
        invoiceLineEdit->setPlaceholderText(QApplication::translate("RequestPaymentDialog", "optional", 0));
        invoiceLabelLabel->setText(QApplication::translate("RequestPaymentDialog", "Invoice Label:", 0));
        invoiceAmountLabel->setText(QApplication::translate("RequestPaymentDialog", "Invoice Amount:", 0));
        invoiceAmountLineEdit->setPlaceholderText(QApplication::translate("RequestPaymentDialog", "optional", 0));
        newInvoiceButton->setText(QApplication::translate("RequestPaymentDialog", "New Invoice", 0));
        InvoiceDetailsBox->setTitle(QApplication::translate("RequestPaymentDialog", "Invoice Details", 0));
        invoiceDetailsLabel_4->setText(QApplication::translate("RequestPaymentDialog", "URL:", 0));
        invoiceDetailsLabel_3->setText(QApplication::translate("RequestPaymentDialog", "Script:", 0));
        invoiceDetailsLabel_2->setText(QApplication::translate("RequestPaymentDialog", "Address:", 0));
        invoiceDetailsLabel->setText(QApplication::translate("RequestPaymentDialog", "Label:", 0));
        addressClipboardButton->setText(QApplication::translate("RequestPaymentDialog", "Copy To Clipboard", 0));
        scriptClipboardButton->setText(QApplication::translate("RequestPaymentDialog", "Copy To Clipboard", 0));
        urlClipboardButton->setText(QApplication::translate("RequestPaymentDialog", "Copy To Clipboard", 0));
        closeButton->setText(QApplication::translate("RequestPaymentDialog", "Close", 0));
        qrLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RequestPaymentDialog: public Ui_RequestPaymentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTPAYMENTDIALOG_H
