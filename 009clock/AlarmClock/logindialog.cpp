#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    //字符编码设置
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//情况1
    QTextCodec::setCodecForTr(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QSound::play("7.wav");
    setFixedSize(400,300);
    setWindowTitle(tr("登录"));
    ui->LoginButton->setDefault(true);
    ui->PwdlineEdit->setEchoMode( QLineEdit::Password );
    FileName=QString::fromStdString("Log_")+QDateTime::currentDateTime().toString("MM")+QString::fromStdString(".txt");
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
/*
 *登录对话框
 *2016年4月5日21:35:19
 */
void LoginDialog::on_LoginButton_clicked()
{
    int hours[5]={6,8,12,18,24};
    int index;
    if(ui->UsertextEdit->toPlainText().isEmpty()||ui->PwdlineEdit->text().isEmpty())
    {
        QMessageBox::information(this,tr("请输入用户名或密码"),tr("请先输入再登录"),QMessageBox::Ok);
        ui->UsertextEdit->setFocus();
    }
    else
    {
        if((ui->UsertextEdit->toPlainText().trimmed().length()<=5)&&(ui->PwdlineEdit->text()=="123"))
        {
            QDialog::accept();
            CurrentUser=ui->UsertextEdit->toPlainText();
            index=ui->TimecomboBox->currentIndex();
            WorkTime=hours[index];
            qDebug()<<"index of TimecomboBox:"<<ui->TimecomboBox->currentIndex();
            qDebug()<<"WorkTime:"<<WorkTime;
            qDebug()<<"CurrentUser:"<<CurrentUser;
            loginLog(CurrentUser);
        }
        else
        {
            QMessageBox::warning(this,tr("登录失败"),tr("请输入正确的账号下面再进行登录！"),QMessageBox::Ok);
            ui->UsertextEdit->clear();
            ui->PwdlineEdit->clear();
            ui->UsertextEdit->setFocus();
        }
    }
}
/*
 *记录用户登录时间
 *2016年4月7日16:56:34
 */

void LoginDialog::loginLog(QString user)
{
    QFile logfile(FileName);
    if(!logfile.open(QIODevice::ReadWrite|QIODevice::Append| QIODevice::Text))
    {
        QMessageBox::information(NULL, "告警", "Log文件打开失败！", QMessageBox::Yes, QMessageBox::Yes);
    }

    QString TextTimeToShow =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")+" ";
    QTextStream out(&logfile);
    out <<TextTimeToShow<<QString::fromStdString(" 当前监盘人: ")<<user<<QString::fromStdString(" 用户登录成功！\n") ;
    logfile.close();

}
