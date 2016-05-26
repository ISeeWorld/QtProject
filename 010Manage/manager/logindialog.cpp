#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
#include "connection.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    setFixedSize(430, 350);
    setWindowTitle(tr("��¼"));
    ui->pwdLineEdit->setFocus();
    ui->loginBtn->setDefault(true);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

// ��¼��ť
void LoginDialog::on_loginBtn_clicked()
{
    if (ui->pwdLineEdit->text().isEmpty()||ui->UserEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("����������"),
                                 tr("�������������ٵ�¼��"), QMessageBox::Ok);
        ui->pwdLineEdit->setFocus();
    } else {
        QSqlQuery query;
        query.exec("select pwd from password");
        query.next();
        if (query.value(0).toString() == ui->pwdLineEdit->text()) {
            QDialog::accept();
        }
        else {
            QMessageBox::warning(this, tr("�������"),
                                 tr("��������ȷ�������ٵ�¼��"), QMessageBox::Ok);
            ui->pwdLineEdit->clear();
            ui->pwdLineEdit->setFocus();
        }
    }
}

// �˳���ť
void LoginDialog::on_quitBtn_clicked()
{
    QDialog::reject();
}
