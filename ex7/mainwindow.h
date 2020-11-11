#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "person.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnSet_clicked();

    void on_btnShow_clicked();

    void on_btnShowIfSetted_clicked();

private:
    Person *pe;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
