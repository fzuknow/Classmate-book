#include "add.h"
#include "ui_add.h"
#include  <Qsqlquery.h>
#include  <QSqlQuery>
#include <qmessagebox.h>
#include "mainwindow.h"

add::add(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
}

add::~add()
{
    delete ui;
}


void add::on_pushButton_clicked()
{
    QSqlQuery query;

    query.prepare("INSERT INTO stu (stu_id, stu_name, stu_sex,stu_address,stu_wechat,stu_email,stu_qq,stu_language) "

                            "VALUES (:stu_id, :stu_name, :stu_sex,:stu_address,:stu_wechat,:stu_email,:stu_qq,:stu_language)");

    query.bindValue(":stu_id", ui->id->text());

    query.bindValue(":stu_name", ui->name->text());

    query.bindValue(":stu_sex", ui->sex->text());

     query.bindValue(":stu_address", ui->address->text());

    query.bindValue(":stu_wechat", ui->wechat->text());

      query.bindValue(":stu_email", ui->email->text());

        query.bindValue(":stu_qq", ui->qq->text());

          query.bindValue(":stu_language", ui->language->text());


    query.exec();

    //插入成功，显示提示框，清空输入框

    QMessageBox::information(this,tr("OK"),tr("同学信息添加完成"),QMessageBox::tr("好的"));

    ui->id->clear();

    ui->name->clear();

    ui->sex->clear();

    ui->address->clear();

    ui->wechat->clear();

    ui->email->clear();

    ui->qq->clear();

    ui->language->clear();
}


void add::on_backbotton_clicked()
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
