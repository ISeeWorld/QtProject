#include "dialog.h"
#include "windows.h"
#include <QApplication>
#include <QtDebug>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QString>
#include <QProcess>
#include <QMessageBox>
#include <QSplashScreen>
#include <QSysInfo>
#include <QSettings>

int main(int argc, char *argv[])
{

     QApplication app(argc, argv);
     QPixmap pixmap("ip.png");
     QSplashScreen splash(pixmap);
     splash.resize(pixmap.size());
     splash.show();
     app.processEvents();
     Sleep(3000);
     Dialog w;
     w.show();
     splash.finish(&w);
     return app.exec();

}

