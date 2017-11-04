#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "add.h"
#include "delete_stu.h"
#include "change.h"
#include <QSqlQueryModel>
#include "change.h"
#include "select_stu.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    this->close();
    select_stu *s = new select_stu;
    s->show();
    QPalette palette;  //创建一个调色板的对象

   QPixmap pixmap(":/bg.jpg");

   //创建一个qrc文件，添加图片到qrc文件中，把一个图片映射到pixmap这个对象上

   QPixmap alterpixmap1=pixmap.scaled(s->width(),s->height());
   //对图片进行scale缩放,背景图片自适应窗口大小

   palette.setBrush(s->backgroundRole(),QBrush(alterpixmap1));

   s->setPalette(palette);

   s->setAutoFillBackground(true);

   s->init();

}

void MainWindow::on_pushButton_4_clicked()
{
    this->close();
    delete_stu *s = new delete_stu;
    s->show();

    QPalette palette;  //创建一个调色板的对象

   QPixmap pixmap(":/bg.jpg");

   //创建一个qrc文件，添加图片到qrc文件中，把一个图片映射到pixmap这个对象上

   QPixmap alterpixmap1=pixmap.scaled(s->width(),s->height());
   //对图片进行scale缩放,背景图片自适应窗口大小

   palette.setBrush(s->backgroundRole(),QBrush(alterpixmap1));

   s->setPalette(palette);

   s->setAutoFillBackground(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
    add *s = new add;
    s->show();
    QPalette palette;  //创建一个调色板的对象

   QPixmap pixmap(":/bg.jpg");

   //创建一个qrc文件，添加图片到qrc文件中，把一个图片映射到pixmap这个对象上

   QPixmap alterpixmap1=pixmap.scaled(s->width(),s->height());
   //对图片进行scale缩放,背景图片自适应窗口大小

   palette.setBrush(s->backgroundRole(),QBrush(alterpixmap1));

   s->setPalette(palette);

   s->setAutoFillBackground(true);
}


void MainWindow::on_pushButton_3_clicked()
{
    this->close();
    change *s = new change;
    s->show();

    QPalette palette;  //创建一个调色板的对象

   QPixmap pixmap(":/bg.jpg");

   //创建一个qrc文件，添加图片到qrc文件中，把一个图片映射到pixmap这个对象上

   QPixmap alterpixmap1=pixmap.scaled(s->width(),s->height());
   //对图片进行scale缩放,背景图片自适应窗口大小

   palette.setBrush(s->backgroundRole(),QBrush(alterpixmap1));

   s->setPalette(palette);

   s->setAutoFillBackground(true);
}
