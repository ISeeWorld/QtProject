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
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QPushButton *quitBtn;
    QPushButton *loginBtn;
    QGroupBox *groupBox;
    QLabel *User;
    QLabel *label_2;
    QLineEdit *pwdLineEdit;
    QLineEdit *UserEdit;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(430, 350);
        LoginDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 137, 101);"));
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 50, 261, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\256\213\344\275\223\";"));
        label->setAlignment(Qt::AlignCenter);
        quitBtn = new QPushButton(LoginDialog);
        quitBtn->setObjectName(QString::fromUtf8("quitBtn"));
        quitBtn->setGeometry(QRect(240, 290, 81, 31));
        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(90, 290, 81, 31));
        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 100, 301, 151));
        User = new QLabel(groupBox);
        User->setObjectName(QString::fromUtf8("User"));
        User->setGeometry(QRect(30, 50, 72, 15));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 36, 16));
        pwdLineEdit = new QLineEdit(groupBox);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(100, 100, 161, 31));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        UserEdit = new QLineEdit(groupBox);
        UserEdit->setObjectName(QString::fromUtf8("UserEdit"));
        UserEdit->setGeometry(QRect(100, 50, 161, 31));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\347\231\273\345\275\225\345\272\223\346\210\277\347\256\241\347\220\206\345\212\251\346\211\213\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        quitBtn->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        loginBtn->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        User->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
