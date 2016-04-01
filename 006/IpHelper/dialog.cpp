#include "dialog.h"
#include "ui_dialog.h"
#include <QtNetwork>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("MisHelper"));
    Dialog::Basicinfo();

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_copall_clicked()
{

    QSettings *settings = new QSettings ("path.ini", QSettings ::IniFormat);
    QString path=settings->value("path/path").toString();
    //类型转换问题
    QProcess::startDetached("explorer "+path);//打开上面获取的目录


}
/*
 *2016年3月28日18:22:55
 *获取电脑基本配置信息
 */
void Dialog::Basicinfo()
{


    QString  strMac;
    QHostAddress address2;
    QList<QNetworkInterface> ifaces = QNetworkInterface::allInterfaces();//获取所有网卡信息
    for (int i = 0; i < ifaces.count(); i++)
    {
        QNetworkInterface iface = ifaces.at(i);
        if ( iface.flags().testFlag(QNetworkInterface::IsUp) && iface.flags().testFlag(QNetworkInterface::IsRunning) && !iface.flags().testFlag(QNetworkInterface::IsLoopBack))
        { //获取当前有效网卡
            for (int j=0; j<iface.addressEntries().count(); j++)
                //这个循环很重要，读者可以尝试不用这个循环看看获取的是不是当前有效网卡：）
            {
                /* we have an interface that is up, and has an ip address
                 * therefore the link is present
                 * we will only enable this check on first positive,
                 * all later results are incorrect * * */

                strMac = iface.hardwareAddress();
                ui->textEdit_mac->setText(iface.hardwareAddress());
                QList<QNetworkAddressEntry> entryList = iface.addressEntries();
                foreach(QNetworkAddressEntry entry,entryList)
                       {
                          address2=entry.ip();
                           if(address2.protocol() == QAbstractSocket::IPv4Protocol)
                         {

                                      ui->textEdit_ip->setText(entry.ip().toString());
                                      ui->textEdit_gate->setText(entry.broadcast().toString());
                                      ui->textEdit_ym->setText(entry.netmask().toString());

                          }
                           else
                          {
                               QMessageBox box;
                               box.setWindowTitle(tr("警告"));
                               box.setIcon(QMessageBox::Warning);
                               box.setText(tr("信息获取失败！"));
                               box.setStandardButtons(QMessageBox::Yes);
                          }
                       }

                i = ifaces.count(); //跳出外层循环
                break;
            }
        }
        else
        {

            QMessageBox box;
            box.setWindowTitle(tr("警告"));
            box.setIcon(QMessageBox::Warning);
            box.setText(tr("信息获取失败！"));
            box.setStandardButtons(QMessageBox::Yes);
        }
    }

      QString sysver=Getsysversion();
      ui->textEdit_os->setText(sysver);
      ui->textEdit_mem->setText(GetsysMem());
      ui->textEdit_cpu->setText(GetsysCpu());
}
/*
 *获取当前操作系统的版本
 *2016年3月29日16:20:07
 */
QString Dialog::Getsysversion()
{
    QString sysv;
    switch(QSysInfo::WindowsVersion)
  {
    case QSysInfo::WV_NT:
        sysv="Windows NT";
        break;
    case QSysInfo::WV_2000:
        sysv="Windows 2000";
        break;
    case QSysInfo::WV_XP:
        sysv="Windows XP";
        break;
    case QSysInfo::WV_2003:
        sysv="Windows Server 2003";
        break;
    case QSysInfo::WV_VISTA:
        sysv="Windows Vista/Windows Server 2008";
        break;
    case QSysInfo::WV_WINDOWS7:
        sysv="Windows 7";
        break;
    default:
        sysv="unknown ysytem";
        break;
  }
    return sysv;

}

QString Dialog::GetsysMem()
{
    MEMORYSTATUS memoryInfo;
    GlobalMemoryStatus(&memoryInfo);

//    qDebug() << QObject::tr("内存使用率")<<memoryInfo.dwMemoryLoad;
//    qDebug() <<"Total Memory:"<<memoryInfo.dwTotalPhys<<"MB";
//    qDebug() << "可用物理内存"<<memoryInfo.dwAvailPhys;
//    qDebug() << "可用地址空间"<<memoryInfo.dwTotalVirtual;
//    qDebug() << "空闲地址空间"<<memoryInfo.dwAvailVirtual;ullTotalPhys
//    qDebug() << "空闲地址空间"<<memoryInfo.dwTotalVirtual;
    return QString::number((memoryInfo.dwTotalPhys/1024/1024),10);

}

QString Dialog::GetsysCpu()
{
    /*
     *cpu memory info
     */
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
//    qDebug() << "cpu_mask:" << systemInfo.dwActiveProcessorMask;
//    qDebug() << "cpu_num:" << systemInfo.dwNumberOfProcessors;
//    qDebug() << "cpu_version:" << systemInfo.wProcessorRevision;
    return  QString::number(systemInfo.wProcessorRevision,10);
}
