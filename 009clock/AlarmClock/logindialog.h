#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include <QTextCodec>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LoginDialog(QWidget *parent = 0);
    QString CurrentUser;
    QString WorkTime;

    ~LoginDialog();
    
private slots:
    void on_LoginButton_clicked();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
