#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLCDNumber>
#include <QTimer>
#include <QDebug>
#include <QMessageBox>
#include <QSound>
#include <windows.h>
#include <QSettings>
#include <QTextCodec>
#include <QFile>

#define  TimeUP 1
#define  AfterClick 2
#define  Finished 1
#define  UnFinished 2

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);
    void TimeAlarmInit();
    void LogandShow(int select);
    void ReadSettings();
    void WriteSettings();
    void Caltimes(int select);
//    void InitSystemTray();
    ~Widget();
    
private:
    Ui::Widget *ui;
private slots:
    void showTime();
    void alarm();
    void CalTime();

};

#endif // WIDGET_H
