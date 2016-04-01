#include "widget.h"
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
    w.show();
    splash.finish(&w);

    return app.exec();
}
