#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define  MB 1024*1024
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    void Basicinfo();
    QString Getsysversion();
    QString GetsysMem();
    QString GetsysCpu();
    ~Dialog();
    
private slots:
    void on_pushButton_copall_clicked();

private:
    Ui::Dialog *ui;

};

#endif // DIALOG_H
