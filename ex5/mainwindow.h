#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "untitled1.h"

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
    void on_btnRun_clicked();

private:
    Ui::MainWindow *ui;
    Untitled1 *myObject;
};

#endif // MAINWINDOW_H
