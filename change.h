#ifndef CHANGE_H
#define CHANGE_H

#include <QMainWindow>

namespace Ui {
class change;
}

class change : public QMainWindow
{
    Q_OBJECT

public:
    explicit change(QWidget *parent = 0);
    ~change();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::change *ui;
};

#endif // CHANGE_H
