#ifndef SELECT_STU_H
#define SELECT_STU_H

#include <QMainWindow>

namespace Ui {
class select_stu;
}

class select_stu : public QMainWindow
{
    Q_OBJECT

public:
    explicit select_stu(QWidget *parent = 0);
    ~select_stu();
    void init();

private slots:
    void on_pushButton_clicked();

    void on_backButton_clicked();

private:
    Ui::select_stu *ui;
};

#endif // SELECT_STU_H
