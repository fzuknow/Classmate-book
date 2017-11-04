#ifndef DELETE_STU_H
#define DELETE_STU_H

#include <QMainWindow>

namespace Ui {
class delete_stu;
}

class delete_stu : public QMainWindow
{
    Q_OBJECT

public:
    explicit delete_stu(QWidget *parent = 0);
    ~delete_stu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::delete_stu *ui;
};

#endif // DELETE_STU_H
