/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QTimeEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QLCDNumber *lcdNumber;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QTimeEdit *timeEdit1;
    QTimeEdit *timeEdit2;
    QTimeEdit *timeEdit3;
    QPushButton *aboutButton;
    QPushButton *StartButton;
    QPushButton *quitButton;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit;
    QGroupBox *groupBox_4;
    QTextEdit *CurrentStateEdit;
    QPushButton *StopButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(469, 584);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 137, 101);\n"
"\n"
""));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 401, 101));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 20, 381, 71));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lcdNumber->setNumDigits(8);
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 230, 401, 151));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 301, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        timeEdit1 = new QTimeEdit(layoutWidget);
        timeEdit1->setObjectName(QString::fromUtf8("timeEdit1"));
        timeEdit1->setFocusPolicy(Qt::ClickFocus);
        timeEdit1->setCalendarPopup(false);

        verticalLayout_2->addWidget(timeEdit1);

        timeEdit2 = new QTimeEdit(layoutWidget);
        timeEdit2->setObjectName(QString::fromUtf8("timeEdit2"));
        timeEdit2->setFocusPolicy(Qt::ClickFocus);

        verticalLayout_2->addWidget(timeEdit2);

        timeEdit3 = new QTimeEdit(layoutWidget);
        timeEdit3->setObjectName(QString::fromUtf8("timeEdit3"));
        timeEdit3->setFocusPolicy(Qt::ClickFocus);

        verticalLayout_2->addWidget(timeEdit3);


        horizontalLayout->addLayout(verticalLayout_2);

        aboutButton = new QPushButton(groupBox_2);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setGeometry(QRect(10, 60, 31, 31));
        aboutButton->setFlat(true);
        StartButton = new QPushButton(Widget);
        StartButton->setObjectName(QString::fromUtf8("StartButton"));
        StartButton->setEnabled(true);
        StartButton->setGeometry(QRect(50, 540, 111, 31));
        StartButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        StartButton->setAutoDefault(false);
        StartButton->setDefault(false);
        StartButton->setFlat(false);
        quitButton = new QPushButton(Widget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(310, 540, 101, 31));
        quitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 390, 401, 131));
        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 361, 101));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(3);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        textEdit->setReadOnly(true);
        textEdit->setTabStopWidth(82);
        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(30, 130, 401, 91));
        CurrentStateEdit = new QTextEdit(groupBox_4);
        CurrentStateEdit->setObjectName(QString::fromUtf8("CurrentStateEdit"));
        CurrentStateEdit->setGeometry(QRect(10, 20, 381, 61));
        CurrentStateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));
        StopButton = new QPushButton(Widget);
        StopButton->setObjectName(QString::fromUtf8("StopButton"));
        StopButton->setGeometry(QRect(180, 540, 111, 31));
        StopButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));

        retranslateUi(Widget);
        QObject::connect(quitButton, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        lcdNumber->setWhatsThis(QApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        groupBox_2->setToolTip(QApplication::translate("Widget", "\346\217\220\351\206\222\346\227\266\351\227\264\350\256\276\347\275\256\346\241\206", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        groupBox_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\220\216\345\217\260\346\212\245\346\226\207\346\265\217\350\247\210\346\217\220\351\206\222\346\227\266\351\227\264\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "\347\254\254\344\270\200\346\254\241\346\217\220\351\206\222", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\347\254\254\344\272\214\346\254\241\346\217\220\351\206\222", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "\347\254\254\344\270\211\346\254\241\346\217\220\351\206\222", 0, QApplication::UnicodeUTF8));
        aboutButton->setText(QString());
        StartButton->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\346\265\217\350\247\210\346\212\245\346\226\207", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("Widget", "\345\220\216\345\217\260\346\212\245\346\226\207\346\265\217\350\247\210\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        groupBox_3->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        groupBox_3->setTitle(QApplication::translate("Widget", "\345\220\216\345\217\260\346\212\245\346\226\207\346\265\217\350\247\210\345\256\214\346\210\220\346\203\205\345\206\265", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Widget", "\345\275\223\345\211\215\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        StopButton->setText(QApplication::translate("Widget", "\346\212\245\346\226\207\346\265\217\350\247\210\347\273\223\346\235\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
