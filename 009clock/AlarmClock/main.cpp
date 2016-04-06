#include "widget.h"
#include "logindialog.h"
#include <QApplication>
#include <QSplashScreen>
#include <QString>




int main(int argc, char *argv[])
{
//    QString UserLogin;
//    QString TimeInput;
    QApplication app(argc, argv);

    QPixmap pixmap("1.png");
    QSplashScreen splash(pixmap);
    splash.resize(pixmap.size());
    splash.show();
    app.processEvents();
    Sleep(3000);
    Widget w;
    LoginDialog dlg;
    splash.finish(&w);
    if(dlg.exec()==QDialog::Accepted)
    {
       w.UserLogin=dlg.CurrentUser;
       w.TimeInput=dlg.WorkTime;
       qDebug()<<"UserLogin:"<<w.UserLogin;
       qDebug()<<"TimeInput:"<<w.TimeInput;
       w.show();
       return app.exec();
    }
    else
    {
        return 0;
    }
}
