#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    setFixedSize(400,300);
    setWindowTitle(tr("登录"));
    ui->LoginButton->setDefault(true);
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
    if(ui->UsertextEdit->toPlainText().isEmpty()||ui->PwdtextEdit->toPlainText().isEmpty())
    {
        QMessageBox::information(this,tr("请输入用户名或密码"),tr("请先输入再登录"),QMessageBox::Ok);
        ui->UsertextEdit->setFocus();
    }
    else
    {
        if((ui->UsertextEdit->toPlainText()=="test")&&(ui->PwdtextEdit->toPlainText()=="123"))
        {
            QDialog::accept();
        }
        else
        {
            QMessageBox::warning(this,tr("登录失败"),tr("请输入正确的账号下面再进行登录！"),QMessageBox::Ok);
            ui->UsertextEdit->clear();
            ui->PwdtextEdit->clear();
            ui->UsertextEdit->setFocus();
        }
    }
}
