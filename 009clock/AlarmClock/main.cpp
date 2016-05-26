#include "widget.h"
#include "logindialog.h"
#include <QApplication>
#include <QSplashScreen>
#include <QString>


int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    QPixmap pixmap("images/start.png");
    QSplashScreen splash(pixmap);
    splash.resize(pixmap.size());
    splash.show();
    app.processEvents();
    Sleep(3000);

    LoginDialog dlg;
    splash.finish(&dlg);

    //控制权的交接 需要考虑
    if(dlg.exec()==QDialog::Accepted)
    {
       Widget w;
       w.UserLogin=dlg.CurrentUser;
       w.TimeInput=dlg.WorkTime;
//       qDebug()<<"main UserLogin:"<<w.UserLogin;
//       qDebug()<<"main TimeInput:"<<w.TimeInput;
       w.show();
       return app.exec();
    }
    else
    {
        return 0;
    }
}
