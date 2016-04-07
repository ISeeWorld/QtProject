#include "widget.h"
#include "ui_widget.h"


int TimeUpFlag=1;
int LoginFlag=1;
long WorkTimeCal;
long CsTimeConfig;
long AllFinished;
long AllUnFinished;
QTimer *Alarmtimer = new QTimer;
QTimer *Caltimer = new QTimer;
QTimer *musicTimer = new QTimer;
QTimer *workTimer = new QTimer;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //初始化读取设置
    ReadSettings();
    Ctime=0;
//    qDebug()<<"start CTIME:"<<Ctime;
    //字符编码设置
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//情况1
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    //控件时间初始化设置
    TimeAlarmInit();
    //播放测试声音
//    QSound::play("1.wav");
    //创建定时器显示时间
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);
    //全局定时器 提醒阅读报文
    connect(Alarmtimer, SIGNAL(timeout()), this, SLOT(alarm()));
    Alarmtimer->start(500);
    //显示时间
    connect(Caltimer, SIGNAL(timeout()), this, SLOT(CalTime()));
    // 注意定时器的槽函数与信号连接问题
    connect(musicTimer, SIGNAL(timeout()), this, SLOT(PlayMusic()));
    //2016年4月1日11:19:01
    connect(workTimer, SIGNAL(timeout()), this, SLOT(WorkTime()));
    showTime();
    setWindowTitle(tr("后台机报文浏览助手"));
    setFixedSize(470,514);
    //初始化文字显示颜色
    ui->textEdit->setTextColor( QColor( "blue" ) );

}

Widget::~Widget()
{
    WriteSettings();
    delete ui;
}



void Widget::showTime()
//! [1] //! [2]
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm:ss");
    if ((time.second() % 2) == 0)
    {
        text[2] = ' ';

    }
    else
    {
        text[5] = ' ';
    }

    ui->lcdNumber->display(text);
//    qDebug()<<"TIME:"<<text;
}
/*
 *提醒设置
 *2016年3月31日09:50:03
 */
void Widget::alarm()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm:ss");
    if(LoginFlag == 1)
    {
      QString TextTimeToShow =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+" "+"当前监盘者："+UserLogin+" 用户登录成功，监盘时长:"+QString::number(TimeInput)+"小时";
      ui->textEdit->append(TextTimeToShow);
      LoginFlag=LoginFlag-1;
      workTimer->start(500);
    }
//    AllFinished++;
//    AllUnFinished++;
////    CsTimeConfig++;
//    qDebug()<<"alarm AllFinished:"<<AllFinished;
//    qDebug()<<"alarm AllUnFinished:"<<AllUnFinished;
//    qDebug()<<"alarm CsTimeConfig:"<<CsTimeConfig;
//    qDebug()<<"alarm CTIME:"<<Ctime;

    int a1h=time.hour()==ui->timeEdit1->time().hour();
    int a1m=time.minute()==ui->timeEdit1->time().minute();
    int a1s=time.second()==ui->timeEdit1->time().second();
    int a1flag=a1h&&a1m&&a1s;

    int a2h=time.hour()==ui->timeEdit2->time().hour();
    int a2m=time.minute()==ui->timeEdit2->time().minute();
    int a2s=time.second()==ui->timeEdit2->time().second();
    int a2flag=a2h&&a2m&&a2s;

    int a3h=time.hour()==ui->timeEdit3->time().hour();
    int a3m=time.minute()==ui->timeEdit3->time().minute();
    int a3s=time.second()==ui->timeEdit3->time().second();
    int a3flag=a3h&&a3m&&a3s;

    if((a1flag||a2flag||a3flag)&&TimeUpFlag)
    {
       TimeUpFlag=0;
       //停止报警提醒定时器
       Alarmtimer->stop();
       //开始超时计时器
       Caltimer->start(1000);
       //记录并且显示文本
       LogandShow(TimeUP);      
       while(!TimeUpFlag)
       {

           int btn=QMessageBox::information(NULL, "时间到!", "请浏览后台机报文！", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
//           Sleep(3000);
           if(QMessageBox::Yes == btn)
           {
               //停止超时计时器
               Caltimer->stop();
               //记录并且显示文本
               LogandShow(AfterClick);
               Ctime=0;
               TimeUpFlag=1;
               //重新启动定时器
               Alarmtimer->start(500);

           }
           else
              //保持界面整齐美观
           {
               //停止超时计时器
               Caltimer->stop();
               LogandShow(AfterClick);
               Ctime=0;
               TimeUpFlag=1;
               Alarmtimer->start(500);
           }
       }
    }


}
/*
 *2016年3月29日23:09:54
 *时间控件显示初始化设置
 */
void Widget::TimeAlarmInit()
{
    ui->timeEdit1->setTime(QTime::QTime(8,30,00));
    ui->timeEdit2->setTime(QTime::QTime(14,30,00));
    ui->timeEdit3->setTime(QTime::QTime(19,30,00));
}

/*
 *显示与记录
 *2016年3月31日10:55:39
 */

void Widget::LogandShow(int select)
{
//    qDebug()<<"LogandShowUserLogin:"<<UserLogin;
//    qDebug()<<"LogandShowTimeInput:"<<TimeInput;
    QFile logfile("log.txt");
    if(!logfile.open(QIODevice::ReadWrite|QIODevice::Append| QIODevice::Text))
    {
        QMessageBox::information(NULL, "告警", "Log文件打开失败！", QMessageBox::Yes, QMessageBox::Yes);
    }
//    QTime time = QTime::currentTime();
//    QString TimeToShow = time.toString("hh:mm:ss");
      QString TextTimeToShow =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+" ";
      QString UiToShow=TextTimeToShow+"当前监盘人:"+UserLogin+"";
      //    QByteArray TextTime = TextTimeToShow.toLatin1();
//    const char *c_str1 = TextTime.data();
//    logfile.write(c_str1);
      QTextStream out(&logfile);
      out <<TextTimeToShow<<QString::fromStdString(" 当前监盘人: ")<<UserLogin;

    //时间到进行的提示
    if(select == 1)
   {
        //声音提醒
//        QSound::play("1.wav");
//        Sleep(2000);
        musicTimer->start(1000);
        //启用定时器报警
        Caltimes(Finished);//计数
        //显示设置
        ui->textEdit->append(UiToShow+" 时间到，请浏览报文！");
        //文件浏览
//        logfile.write(" 时间到，请浏览报文！\n");
        out<<QString::fromStdString(" 时间到，请浏览报文！\n");
        //??????????????????????????
        logfile.close();
       //初始化超时设置  启动超时定时器
   }
    //点击后进行的记录
    else if(select == 2)
   {

        //判断是否超时
        //CsTimeConfig 全局变量计时阈值
        //单位是分钟

        if(Ctime<(CsTimeConfig*60))
        {
            //点击确认没有超时
//            qDebug()<<"TIME UP CTIME:"<<Ctime;
            QSound::play("2.wav");
            //写入字符转
            ui->textEdit->append(UiToShow+" 点击确认，开始浏览报文！");
//            logfile.write(c_str1);
//            logfile.close();
//            logfile.write(" 点击确认，开始浏览报文！\n");
            out<<QString::fromStdString(" 点击确认，开始浏览报文！\n");
        }
        else
        {
            //点击确认已经超时
            QSound::play("3.wav");
            ui->textEdit->setTextColor( QColor( "red" ) );
            ui->textEdit->append(UiToShow+" 确认超时，请按时浏览报文！");
            ui->textEdit->setTextColor( QColor( "blue" ) );
//            logfile.write(c_str1);
//            logfile.close();
//            logfile.write(" 确认超时，请按时浏览报文！\n");
            out<<QString::fromStdString(" 确认超时，请按时浏览报文！\n");
            Caltimes(UnFinished);

             //记录超时次数
        }

        WriteSettings();
//        logfile.close();
   }

    else
    {

    }
     logfile.close();

}
/*
 *实现报文浏览超时提醒
 *2016年3月30日18:03:55
 */
void Widget::CalTime()
{
   Ctime++;
//   qDebug()<<"CalTime i am running!!";
//   qDebug()<<"CTIME:"<<Ctime;
}
/*
 *读取设置
 *2016年3月31日10:45:08
 */
void Widget::ReadSettings()
{
    QSettings *settings = new QSettings ("config.ini", QSettings ::IniFormat);
    CsTimeConfig=settings->value("config/timeout").toLongLong();
    AllFinished=settings->value("config/finished").toLongLong();
    AllUnFinished=settings->value("config/unfinished").toLongLong();
}

/*
 *写入设置
 *2016年3月31日10:45:08
 */
void Widget::WriteSettings()
{
    QSettings setting("config.ini",QSettings::IniFormat);//生成配置文件
    setting.beginGroup("config");//beginGroup与下面endGroup 相对应，“config”是标记
    QString StrCsTimeConfig,StrAllFinished,StrAllUnFinished;
    StrCsTimeConfig.setNum(CsTimeConfig);
    StrAllFinished.setNum(AllFinished);
    StrAllUnFinished.setNum(AllUnFinished);
    setting.setValue("timeout",QVariant(StrCsTimeConfig));
    setting.setValue("finished",QVariant(StrAllFinished));
    setting.setValue("unfinished",QVariant(StrAllUnFinished));
    setting.endGroup();
}
/*
 *记录报文提醒次数与超时浏览事件
 *2016年3月31日15:53:12
 */
void Widget::Caltimes(int select)
{
    if(select==1)
    {
        AllFinished++;
        if(AllFinished>20000000)
        {
         AllFinished=0;
        }
    }
    if(select ==2)
    {
        AllUnFinished++;
        if(AllUnFinished>20000000)
        {
         AllUnFinished=0;
        }
    }
}

void Widget::on_aboutButton_clicked()
{
//    return MessageBox.Show("开发者：温彪", "关于",MessageBoxButtons.OK, MessageBoxIcon.Information);
//      QMessageBox::about(NULL, "关于", "开发者：温彪 版本V1.0");
    QMessageBox message(QMessageBox::NoIcon, "关于", "<br><strong>开发者：温彪</strong><br><br><strong>版本V1.0</strong>");
    message.setIconPixmap(QPixmap("wb.png"));
    message.exec();
}
/*
 *使用定时器播放声音
 *2016年4月4日22:45:37
 */
void Widget::PlayMusic()
{

    QSound::play("1.wav");
    musicTimer->stop();

}
void Widget::WorkTime()
{
        if(WorkTimeCal==1)
    {
         QSound::play("4.wav");
    }

        WorkTimeCal++;

        if(WorkTimeCal>=TimeInput*5)
    {
        workTimer->stop();
        Sleep(1000);
        QSound::play("5.wav");
        Sleep(8000);
        Widget::destroy();

    }

}
