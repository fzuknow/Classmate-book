#include "select_stu.h"
#include "ui_select_stu.h"
#include <QString>
#include <Qmessagebox.h>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "mainwindow.h"
#include <QSqlTableModel>

select_stu::select_stu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::select_stu)
{
    ui->setupUi(this);
}

select_stu::~select_stu()
{
    delete ui;
}

void select_stu::init()
{
    QSqlTableModel *model ;


    model = new QSqlTableModel(this);



    model->setTable("stu");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select(); //选取整个表的所有行

    model->setHeaderData(0, Qt::Horizontal, tr("编号"));
    model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(2, Qt::Horizontal, tr("性别"));
    model->setHeaderData(3, Qt::Horizontal, tr("地址"));
    model->setHeaderData(4, Qt::Horizontal, tr("微信"));
    model->setHeaderData(5, Qt::Horizontal, tr("邮箱"));
    model->setHeaderData(6, Qt::Horizontal, tr("QQ号"));
    model->setHeaderData(7, Qt::Horizontal, tr("个性签名"));

   ui->tableView->setModel(model);
}


void select_stu::on_pushButton_clicked()
{
    QString name1 = ui->lineEdit->text();

    QSqlTableModel *model ;


    model = new QSqlTableModel(this);



    model->setTable("stu");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select(); //选取整个表的所有行

    model->setHeaderData(0, Qt::Horizontal, tr("编号"));
    model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(2, Qt::Horizontal, tr("性别"));
    model->setHeaderData(3, Qt::Horizontal, tr("地址"));
    model->setHeaderData(4, Qt::Horizontal, tr("微信"));
    model->setHeaderData(5, Qt::Horizontal, tr("邮箱"));
    model->setHeaderData(6, Qt::Horizontal, tr("QQ号"));
    model->setHeaderData(7, Qt::Horizontal, tr("个性签名"));

    ui->tableView->setModel(model);
        model->setFilter(QObject::tr("stu_name = '%1'").arg(name1)); //根据学号进行筛选
        model->select(); //显示结果
        //ui->lineEdit->clear();


}

void select_stu::on_backButton_clicked()
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


