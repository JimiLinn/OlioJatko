#ifndef FOURTHFORM_H
#define FOURTHFORM_H

#include <QWidget>

namespace Ui {
class FourthForm;
}

class FourthForm : public QWidget
{
    Q_OBJECT

public:
    explicit FourthForm(QWidget *parent = 0);
    ~FourthForm();

private slots:
    void on_btnClose_clicked();

private:
    Ui::FourthForm *ui;
};

#endif // FOURTHFORM_H
