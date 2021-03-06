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
#include <QProcess>

#define  TimeUP 1
#define  AfterClick 2
#define  Finished 1
#define  UnFinished 2
#define  TimeDelayClose  30
#define  AlarmCancel    60
//取消报警的时间阈值
#define  TimeUpEvent     1
#define  AfterClicked    2
#define  LogoutEvent     3
#define  StartReadEvent  4
#define  StopReadEvent   5
#define  QuitEvent       6

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
//    void ReadSettings();
//    void WriteSettings();
//    void Caltimes(int select);
    QString UserLogin;
    QString FileName;
    int TimeInput;
    QString Encrypt(QDateTime time);


    ~Widget();
    
private:
    Ui::Widget *ui;
    long Ctime;
private slots:
    void showTime();
    void alarm();
    void CalTime();
    void PlayMusic();
    void WorkTime();

    void on_aboutButton_clicked();
    void on_StartButton_clicked();
    void on_StopButton_clicked();
};

#endif // WIDGET_H
