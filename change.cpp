#include "change.h"
#include "ui_change.h"
#include <QString>
#include <Qmessagebox.h>
#include <QSqlQuery>
#include "mainwindow.h"

change::change(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);
}

change::~change()
{
    delete ui;
}

void change::on_pushButton_clicked()
{


    QString id1=ui->id->text();
    QString name1=ui->name->text();
    QString addr1=ui->address->text();
    QString wechat1=ui->wechat->text();
    //QString grade=ui->GRADE->text();
    QString email1=ui->email->text();
    QString qq1=ui->qq->text();
    QString lang1=ui->language->text();

    QSqlQuery query;


 //   query.prepare("UPDATE stu SET stu_address =?,stu_wechat=?,stu_email=?,stu_qq=?,stu_language= ? WHERE stu_name = ? AND stu_id= ?");

    if(addr1!=NULL)
    {
       query.prepare("UPDATE stu SET stu_address =? WHERE stu_name = ? AND stu_id= ?");
       query.addBindValue(addr1);

       query.addBindValue(name1);

       query.addBindValue(id1);

       query.exec();
    }


    if(wechat1!=NULL)
    {
       query.prepare("UPDATE stu SET stu_wechat=? WHERE stu_name = ? AND stu_id= ?");
       query.addBindValue(wechat1);
       query.addBindValue(name1);

       query.addBindValue(id1);

       query.exec();
    }


    if(email1!=NULL)
    {
        query.prepare("UPDATE stu SET stu_email=? WHERE stu_name = ? AND stu_id= ?");

        query.addBindValue(email1);
        query.addBindValue(name1);

        query.addBindValue(id1);

        query.exec();
    }


    if(qq1!=NULL)
    {
        query.prepare("UPDATE stu SET stu_qq=? WHERE stu_name = ? AND stu_id= ?");
        query.addBindValue(qq1);
        query.addBindValue(name1);

        query.addBindValue(id1);

        query.exec();
    }


    if(lang1!=NULL)
    {
        query.prepare("UPDATE stu SET stu_language= ? WHERE stu_name = ? AND stu_id= ?");
        query.addBindValue(lang1);
        query.addBindValue(name1);

        query.addBindValue(id1);

        query.exec();
    }





    //插入成功，显示提示框，清空输入框

    QMessageBox::information(this,tr("OK"),tr("同学信息修改完成"),QMessageBox::tr("好的"));

    ui->id->clear();

    ui->name->clear();

    ui->address->clear();

    ui->wechat->clear();

    ui->email->clear();

    ui->qq->clear();

    ui->language->clear();
}

void change::on_pushButton_2_clicked()
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
