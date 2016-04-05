#include "widget.h"
#include "logindialog.h"
#include <QApplication>
#include <QSplashScreen>



int main(int argc, char *argv[])
{
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
       w.show();
       return app.exec();
    }
    else
    {
        return 0;
    }
}
