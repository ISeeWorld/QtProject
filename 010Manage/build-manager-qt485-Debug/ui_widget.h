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
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QStackedWidget *stackedWidget;
    QWidget *managePage;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *toolBoxPage1;
    QLabel *label_9;
    QPushButton *sellCancelBtn;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *sellTypeComboBox;
    QComboBox *sellBrandComboBox;
    QPushButton *sellOkBtn;
    QLabel *label_8;
    QSpinBox *sellNumSpinBox;
    QLineEdit *sellSumLineEdit;
    QLabel *label_13;
    QLabel *label_24;
    QLineEdit *sellPriceLineEdit;
    QLabel *label_25;
    QLabel *sellLastNumLabel;
    QWidget *page_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *goodsOkBtn;
    QPushButton *goodsCancelBtn;
    QComboBox *goodsTypeComboBox;
    QLineEdit *goodsPriceLineEdit;
    QComboBox *goodsBrandComboBox;
    QLabel *label_12;
    QLineEdit *goodsSumLineEdit;
    QLabel *label_19;
    QLabel *label_20;
    QSpinBox *goodsNumSpinBox;
    QWidget *page_5;
    QSpinBox *newNumSpinBox;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *newPriceLineEdit;
    QComboBox *newTypeComboBox;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *newCancelBtn;
    QLabel *label_18;
    QPushButton *newOkBtn;
    QLineEdit *newBrandlineEdit;
    QLineEdit *newSumLineEdit;
    QLabel *label_21;
    QLabel *label_22;
    QListWidget *dailyList;
    QWidget *chartPage;
    QLabel *label_3;
    QComboBox *typeComboBox;
    QPushButton *updateBtn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *manageBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *chartBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *passwordBtn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *passwordBtn_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(933, 545);
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(25, 70, 861, 411));
        managePage = new QWidget();
        managePage->setObjectName(QString::fromUtf8("managePage"));
        label = new QLabel(managePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 841, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);
        toolBox = new QToolBox(managePage);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(30, 40, 401, 391));
        toolBox->setFrameShape(QFrame::WinPanel);
        toolBox->setFrameShadow(QFrame::Raised);
        toolBoxPage1 = new QWidget();
        toolBoxPage1->setObjectName(QString::fromUtf8("toolBoxPage1"));
        toolBoxPage1->setGeometry(QRect(0, 0, 397, 297));
        label_9 = new QLabel(toolBoxPage1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 200, 36, 16));
        sellCancelBtn = new QPushButton(toolBoxPage1);
        sellCancelBtn->setObjectName(QString::fromUtf8("sellCancelBtn"));
        sellCancelBtn->setGeometry(QRect(150, 250, 75, 23));
        label_6 = new QLabel(toolBoxPage1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(21, 50, 36, 16));
        label_7 = new QLabel(toolBoxPage1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(21, 87, 36, 16));
        sellTypeComboBox = new QComboBox(toolBoxPage1);
        sellTypeComboBox->setObjectName(QString::fromUtf8("sellTypeComboBox"));
        sellTypeComboBox->setGeometry(QRect(63, 50, 161, 20));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sellTypeComboBox->sizePolicy().hasHeightForWidth());
        sellTypeComboBox->setSizePolicy(sizePolicy);
        sellBrandComboBox = new QComboBox(toolBoxPage1);
        sellBrandComboBox->setObjectName(QString::fromUtf8("sellBrandComboBox"));
        sellBrandComboBox->setGeometry(QRect(63, 87, 210, 20));
        sizePolicy.setHeightForWidth(sellBrandComboBox->sizePolicy().hasHeightForWidth());
        sellBrandComboBox->setSizePolicy(sizePolicy);
        sellOkBtn = new QPushButton(toolBoxPage1);
        sellOkBtn->setObjectName(QString::fromUtf8("sellOkBtn"));
        sellOkBtn->setGeometry(QRect(30, 250, 75, 23));
        label_8 = new QLabel(toolBoxPage1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(21, 160, 36, 16));
        sellNumSpinBox = new QSpinBox(toolBoxPage1);
        sellNumSpinBox->setObjectName(QString::fromUtf8("sellNumSpinBox"));
        sellNumSpinBox->setGeometry(QRect(63, 160, 51, 22));
        sellSumLineEdit = new QLineEdit(toolBoxPage1);
        sellSumLineEdit->setObjectName(QString::fromUtf8("sellSumLineEdit"));
        sellSumLineEdit->setGeometry(QRect(63, 200, 100, 20));
        label_13 = new QLabel(toolBoxPage1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 200, 54, 12));
        label_24 = new QLabel(toolBoxPage1);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(21, 120, 36, 16));
        sellPriceLineEdit = new QLineEdit(toolBoxPage1);
        sellPriceLineEdit->setObjectName(QString::fromUtf8("sellPriceLineEdit"));
        sellPriceLineEdit->setGeometry(QRect(63, 120, 101, 20));
        label_25 = new QLabel(toolBoxPage1);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(180, 120, 54, 12));
        sellLastNumLabel = new QLabel(toolBoxPage1);
        sellLastNumLabel->setObjectName(QString::fromUtf8("sellLastNumLabel"));
        sellLastNumLabel->setGeometry(QRect(130, 160, 111, 20));
        toolBox->addItem(toolBoxPage1, QString::fromUtf8("\345\207\272\345\224\256\345\225\206\345\223\201"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 397, 297));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(21, 50, 36, 16));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(21, 87, 36, 16));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(21, 120, 36, 16));
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(21, 160, 36, 16));
        goodsOkBtn = new QPushButton(page_3);
        goodsOkBtn->setObjectName(QString::fromUtf8("goodsOkBtn"));
        goodsOkBtn->setGeometry(QRect(30, 250, 75, 23));
        goodsCancelBtn = new QPushButton(page_3);
        goodsCancelBtn->setObjectName(QString::fromUtf8("goodsCancelBtn"));
        goodsCancelBtn->setGeometry(QRect(150, 250, 75, 23));
        goodsTypeComboBox = new QComboBox(page_3);
        goodsTypeComboBox->setObjectName(QString::fromUtf8("goodsTypeComboBox"));
        goodsTypeComboBox->setGeometry(QRect(63, 50, 151, 20));
        goodsPriceLineEdit = new QLineEdit(page_3);
        goodsPriceLineEdit->setObjectName(QString::fromUtf8("goodsPriceLineEdit"));
        goodsPriceLineEdit->setGeometry(QRect(63, 120, 100, 20));
        goodsBrandComboBox = new QComboBox(page_3);
        goodsBrandComboBox->setObjectName(QString::fromUtf8("goodsBrandComboBox"));
        goodsBrandComboBox->setGeometry(QRect(63, 87, 210, 20));
        label_12 = new QLabel(page_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(180, 120, 54, 12));
        goodsSumLineEdit = new QLineEdit(page_3);
        goodsSumLineEdit->setObjectName(QString::fromUtf8("goodsSumLineEdit"));
        goodsSumLineEdit->setGeometry(QRect(63, 200, 100, 20));
        label_19 = new QLabel(page_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(179, 200, 54, 12));
        label_20 = new QLabel(page_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 200, 36, 16));
        goodsNumSpinBox = new QSpinBox(page_3);
        goodsNumSpinBox->setObjectName(QString::fromUtf8("goodsNumSpinBox"));
        goodsNumSpinBox->setGeometry(QRect(63, 160, 61, 20));
        toolBox->addItem(page_3, QString::fromUtf8("\345\267\262\346\234\211\345\225\206\345\223\201\345\205\245\345\272\223"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 397, 297));
        newNumSpinBox = new QSpinBox(page_5);
        newNumSpinBox->setObjectName(QString::fromUtf8("newNumSpinBox"));
        newNumSpinBox->setGeometry(QRect(63, 160, 61, 20));
        label_14 = new QLabel(page_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(21, 120, 36, 16));
        label_15 = new QLabel(page_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(21, 160, 36, 16));
        newPriceLineEdit = new QLineEdit(page_5);
        newPriceLineEdit->setObjectName(QString::fromUtf8("newPriceLineEdit"));
        newPriceLineEdit->setGeometry(QRect(63, 120, 81, 20));
        newTypeComboBox = new QComboBox(page_5);
        newTypeComboBox->setObjectName(QString::fromUtf8("newTypeComboBox"));
        newTypeComboBox->setGeometry(QRect(63, 50, 151, 20));
        label_16 = new QLabel(page_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(21, 50, 36, 16));
        label_17 = new QLabel(page_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(160, 120, 54, 12));
        newCancelBtn = new QPushButton(page_5);
        newCancelBtn->setObjectName(QString::fromUtf8("newCancelBtn"));
        newCancelBtn->setGeometry(QRect(150, 250, 75, 23));
        label_18 = new QLabel(page_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(21, 87, 36, 16));
        newOkBtn = new QPushButton(page_5);
        newOkBtn->setObjectName(QString::fromUtf8("newOkBtn"));
        newOkBtn->setGeometry(QRect(30, 250, 75, 23));
        newBrandlineEdit = new QLineEdit(page_5);
        newBrandlineEdit->setObjectName(QString::fromUtf8("newBrandlineEdit"));
        newBrandlineEdit->setGeometry(QRect(63, 87, 210, 20));
        newSumLineEdit = new QLineEdit(page_5);
        newSumLineEdit->setObjectName(QString::fromUtf8("newSumLineEdit"));
        newSumLineEdit->setGeometry(QRect(62, 200, 100, 20));
        label_21 = new QLabel(page_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(179, 200, 54, 12));
        label_22 = new QLabel(page_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 200, 36, 16));
        toolBox->addItem(page_5, QString::fromUtf8("\346\226\260\345\225\206\345\223\201\345\205\245\345\272\223"));
        dailyList = new QListWidget(managePage);
        dailyList->setObjectName(QString::fromUtf8("dailyList"));
        dailyList->setGeometry(QRect(490, 50, 361, 371));
        dailyList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        stackedWidget->addWidget(managePage);
        chartPage = new QWidget();
        chartPage->setObjectName(QString::fromUtf8("chartPage"));
        label_3 = new QLabel(chartPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 20, 700, 20));
        label_3->setFont(font);
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setAlignment(Qt::AlignCenter);
        typeComboBox = new QComboBox(chartPage);
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));
        typeComboBox->setGeometry(QRect(10, 50, 191, 22));
        updateBtn = new QPushButton(chartPage);
        updateBtn->setObjectName(QString::fromUtf8("updateBtn"));
        updateBtn->setGeometry(QRect(210, 50, 75, 23));
        stackedWidget->addWidget(chartPage);
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(51, 10, 841, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        manageBtn = new QPushButton(widget);
        manageBtn->setObjectName(QString::fromUtf8("manageBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(manageBtn->sizePolicy().hasHeightForWidth());
        manageBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(manageBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        chartBtn = new QPushButton(widget);
        chartBtn->setObjectName(QString::fromUtf8("chartBtn"));
        sizePolicy1.setHeightForWidth(chartBtn->sizePolicy().hasHeightForWidth());
        chartBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(chartBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        passwordBtn = new QPushButton(widget);
        passwordBtn->setObjectName(QString::fromUtf8("passwordBtn"));
        sizePolicy1.setHeightForWidth(passwordBtn->sizePolicy().hasHeightForWidth());
        passwordBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(passwordBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        passwordBtn_2 = new QPushButton(widget);
        passwordBtn_2->setObjectName(QString::fromUtf8("passwordBtn_2"));
        sizePolicy1.setHeightForWidth(passwordBtn_2->sizePolicy().hasHeightForWidth());
        passwordBtn_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(passwordBtn_2);


        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\346\225\260\346\215\256\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        sellCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0, QApplication::UnicodeUTF8));
        sellOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("Widget", "\345\205\203", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("Widget", "\345\205\203", 0, QApplication::UnicodeUTF8));
        sellLastNumLabel->setText(QApplication::translate("Widget", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232000", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(toolBoxPage1), QApplication::translate("Widget", "\345\207\272\345\224\256\345\225\206\345\223\201", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        goodsOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        goodsCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("Widget", "\345\205\203", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("Widget", "\345\205\203", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("Widget", "\345\267\262\346\234\211\345\225\206\345\223\201\345\205\245\345\272\223", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("Widget", "\345\205\203", 0, QApplication::UnicodeUTF8));
        newCancelBtn->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", 0, QApplication::UnicodeUTF8));
        newOkBtn->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Widget", "\345\205\203", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("Widget", "\346\226\260\345\225\206\345\223\201\345\205\245\345\272\223", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "\351\224\200\345\224\256\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        updateBtn->setText(QApplication::translate("Widget", "\346\233\264\346\226\260\346\230\276\347\244\272", 0, QApplication::UnicodeUTF8));
        manageBtn->setText(QApplication::translate("Widget", "\345\225\206\345\223\201\347\256\241\347\220\206", 0, QApplication::UnicodeUTF8));
        chartBtn->setText(QApplication::translate("Widget", "\351\224\200\345\224\256\347\273\237\350\256\241", 0, QApplication::UnicodeUTF8));
        passwordBtn->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        passwordBtn_2->setText(QApplication::translate("Widget", "\346\235\241\345\275\242\347\240\201\345\275\225\345\205\245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
