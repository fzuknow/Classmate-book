//#include <QtGui/QApplication>
#include<QApplication>
#include<QtGui>
#include "mainwindow.h"
#include <QWidget>
#include <QHBoxLayout>
#include <QFrame>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QFrame>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QObject>
#include "select_stu.h"

void OpenDatabase()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName(QString("DRIVER={SQL SERVER};"
                               "SERVER=%1;" //服务器名称
                               "DATABASE=%2;"//数据库名
                               "UID=%3;"           //登录名
                               "PWD=%4;"        //密码
                               ).arg("")
                       .arg("classmate")
                       .arg("sa")
                       .arg("123456")
                       );
    if (!db.open())
    {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
                              db.lastError().databaseText(), QMessageBox::Cancel);

    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


     QPalette palette;  //创建一个调色板的对象

    QPixmap pixmap(":/bg.jpg");

    //创建一个qrc文件，添加图片到qrc文件中，把一个图片映射到pixmap这个对象上

    QPixmap alterpixmap1=pixmap.scaled(w.width(),w.height());
    //对图片进行scale缩放,背景图片自适应窗口大小

    palette.setBrush(w.backgroundRole(),QBrush(alterpixmap1));

    w.setPalette(palette);

    w.setAutoFillBackground(true);
    w.show();


    //打开数据库
    OpenDatabase();

    return a.exec();

    return 0;
}
