#include "delete_stu.h"
#include "ui_delete_stu.h"
#include <QString>
#include <Qmessagebox.h>
#include <QSqlQuery>
#include "mainwindow.h"


delete_stu::delete_stu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::delete_stu)
{
    ui->setupUi(this);
}

delete_stu::~delete_stu()
{
    delete ui;
}

void delete_stu::on_pushButton_clicked()
{
    QString id1=ui->id->text();
    QString name1=ui->name->text();


    QSqlQuery query;

    query.prepare(QString("DELETE FROM stu WHERE stu_id = ? AND stu_name = ?"));

    query.addBindValue(id1);

    query.addBindValue(name1);


    query.exec();

    //插入成功，显示提示框，清空输入框

    QMessageBox::information(this,tr("OK"),tr("同学信息删除完成"),QMessageBox::tr("好的"));

    ui->id->clear();

    ui->name->clear();


}

void delete_stu::on_pushButton_2_clicked()
{
    this->close();
    MainWindow *s = new MainWindow;
    QPalette palette;  //创建一个调色板的对象

   QPixmap pixmap(":/bg.jpg");

   //创建一个qrc文件，添加图片到qrc文件中，把一个图片映射到pixmap这个对象上

   QPixmap alterpixmap1=pixmap.scaled(s->width(),s->height());
   //对图片进行scale缩放,背景图片自适应窗口大小

   palette.setBrush(s->backgroundRole(),QBrush(alterpixmap1));

   s->setPalette(palette);

   s->setAutoFillBackground(true);
    s->show();

}
