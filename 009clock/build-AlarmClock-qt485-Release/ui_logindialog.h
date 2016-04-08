/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *UsertextEdit;
    QLabel *label_4;
    QComboBox *TimecomboBox;
    QPushButton *LoginButton;
    QPushButton *quitButton;
    QLineEdit *PwdlineEdit;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(409, 317);
        LoginDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 137, 101);"));
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 30, 261, 51));
        label->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\256\213\344\275\223\";"));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 110, 72, 15));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 160, 72, 15));
        UsertextEdit = new QTextEdit(LoginDialog);
        UsertextEdit->setObjectName(QString::fromUtf8("UsertextEdit"));
        UsertextEdit->setGeometry(QRect(160, 100, 121, 31));
        UsertextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 210, 72, 15));
        TimecomboBox = new QComboBox(LoginDialog);
        TimecomboBox->setObjectName(QString::fromUtf8("TimecomboBox"));
        TimecomboBox->setGeometry(QRect(160, 200, 121, 31));
        LoginButton = new QPushButton(LoginDialog);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(70, 250, 93, 28));
        quitButton = new QPushButton(LoginDialog);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(250, 250, 93, 28));
        PwdlineEdit = new QLineEdit(LoginDialog);
        PwdlineEdit->setObjectName(QString::fromUtf8("PwdlineEdit"));
        PwdlineEdit->setGeometry(QRect(160, 150, 121, 31));
        PwdlineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(LoginDialog);
        QObject::connect(quitButton, SIGNAL(clicked()), LoginDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\347\231\273\351\231\206\345\220\216\345\217\260\346\234\272\346\212\245\346\226\207\346\265\217\350\247\210\345\212\251\346\211\213\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("LoginDialog", "\347\233\221\347\233\230\346\227\266\351\225\277", 0, QApplication::UnicodeUTF8));
        TimecomboBox->clear();
        TimecomboBox->insertItems(0, QStringList()
         << QApplication::translate("LoginDialog", "6\345\260\217\346\227\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LoginDialog", "8\345\260\217\346\227\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LoginDialog", "12\345\260\217\346\227\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LoginDialog", "18\345\260\217\346\227\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LoginDialog", "24\345\260\217\346\227\266", 0, QApplication::UnicodeUTF8)
        );
        LoginButton->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
