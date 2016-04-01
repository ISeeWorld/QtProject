/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextEdit *textEdit_os;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit_cpu;
    QLabel *label_3;
    QTextEdit *textEdit_mem;
    QLabel *label_4;
    QTextEdit *textEdit_ip;
    QTextEdit *textEdit_ym;
    QLabel *label_5;
    QLabel *label_6;
    QTextEdit *textEdit_gate;
    QTextEdit *textEdit_mac;
    QLabel *label_7;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_copall;
    QPushButton *pushButton_quit;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(494, 454);
        Dialog->setStyleSheet(QString::fromUtf8("background-color: rgba(209, 209, 209, 80);"));
        textEdit_os = new QTextEdit(Dialog);
        textEdit_os->setObjectName(QString::fromUtf8("textEdit_os"));
        textEdit_os->setGeometry(QRect(149, 344, 181, 31));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(49, 354, 72, 15));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 290, 81, 20));
        textEdit_cpu = new QTextEdit(Dialog);
        textEdit_cpu->setObjectName(QString::fromUtf8("textEdit_cpu"));
        textEdit_cpu->setGeometry(QRect(150, 290, 181, 31));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 240, 81, 20));
        textEdit_mem = new QTextEdit(Dialog);
        textEdit_mem->setObjectName(QString::fromUtf8("textEdit_mem"));
        textEdit_mem->setGeometry(QRect(150, 240, 181, 31));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(49, 40, 81, 20));
        textEdit_ip = new QTextEdit(Dialog);
        textEdit_ip->setObjectName(QString::fromUtf8("textEdit_ip"));
        textEdit_ip->setGeometry(QRect(149, 40, 181, 31));
        textEdit_ym = new QTextEdit(Dialog);
        textEdit_ym->setObjectName(QString::fromUtf8("textEdit_ym"));
        textEdit_ym->setGeometry(QRect(149, 80, 181, 31));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(49, 80, 81, 20));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(49, 130, 81, 20));
        textEdit_gate = new QTextEdit(Dialog);
        textEdit_gate->setObjectName(QString::fromUtf8("textEdit_gate"));
        textEdit_gate->setGeometry(QRect(149, 130, 181, 31));
        textEdit_mac = new QTextEdit(Dialog);
        textEdit_mac->setObjectName(QString::fromUtf8("textEdit_mac"));
        textEdit_mac->setGeometry(QRect(149, 180, 181, 31));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(49, 190, 81, 20));
        pushButton_7 = new QPushButton(Dialog);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(350, 340, 93, 28));
        pushButton_6 = new QPushButton(Dialog);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(350, 290, 93, 28));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(350, 240, 93, 28));
        pushButton_1 = new QPushButton(Dialog);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(350, 40, 93, 28));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 130, 93, 28));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(350, 180, 93, 28));
        pushButton_copall = new QPushButton(Dialog);
        pushButton_copall->setObjectName(QString::fromUtf8("pushButton_copall"));
        pushButton_copall->setGeometry(QRect(70, 400, 131, 31));
        pushButton_quit = new QPushButton(Dialog);
        pushButton_quit->setObjectName(QString::fromUtf8("pushButton_quit"));
        pushButton_quit->setGeometry(QRect(280, 400, 141, 31));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 451, 381));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 70, 93, 28));
        groupBox->raise();
        textEdit_os->raise();
        label->raise();
        label_2->raise();
        textEdit_cpu->raise();
        label_3->raise();
        textEdit_mem->raise();
        label_4->raise();
        textEdit_ip->raise();
        textEdit_ym->raise();
        label_5->raise();
        label_6->raise();
        textEdit_gate->raise();
        textEdit_mac->raise();
        label_7->raise();
        pushButton_7->raise();
        pushButton_6->raise();
        pushButton_5->raise();
        pushButton_1->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_copall->raise();
        pushButton_quit->raise();

        retranslateUi(Dialog);
        QObject::connect(pushButton_quit, SIGNAL(clicked()), Dialog, SLOT(close()));
        QObject::connect(pushButton_1, SIGNAL(clicked()), textEdit_ip, SLOT(selectAll()));
        QObject::connect(pushButton_1, SIGNAL(clicked()), textEdit_ip, SLOT(copy()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), textEdit_ym, SLOT(selectAll()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), textEdit_ym, SLOT(copy()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), textEdit_gate, SLOT(selectAll()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), textEdit_gate, SLOT(copy()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), textEdit_mac, SLOT(selectAll()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), textEdit_mac, SLOT(copy()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Dialog", "\346\223\215\344\275\234\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "\345\244\204\347\220\206\345\231\250\345\236\213\345\217\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "\345\206\205\345\255\230", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "IP", 0, QApplication::UnicodeUTF8));
        textEdit_ip->setHtml(QApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "\345\255\220\347\275\221\346\216\251\347\240\201", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "\351\273\230\350\256\244\347\275\221\345\205\263", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "\347\211\251\347\220\206\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Dialog", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Dialog", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Dialog", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("Dialog", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Dialog", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Dialog", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
        pushButton_copall->setText(QApplication::translate("Dialog", "\346\211\223\345\274\200MIS\347\224\265\350\204\221\345\217\260\350\264\246", 0, QApplication::UnicodeUTF8));
        pushButton_quit->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Dialog", "\345\217\230\347\224\265\347\256\241\347\220\206\344\272\214\345\244\204\344\270\223\347\224\250", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Dialog", "\345\244\215\345\210\266", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
