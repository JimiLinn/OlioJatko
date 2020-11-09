#ifndef THIRDFORM_H
#define THIRDFORM_H

#include <QWidget>

namespace Ui {
class ThirdForm;
}

class ThirdForm : public QWidget
{
    Q_OBJECT

public:
    explicit ThirdForm(QWidget *parent = 0);
    ~ThirdForm();

    QString getNameFromMain() const;
    void setNameFromMain(const QString &value);

private slots:
    void on_btnShow_clicked();

private:
    Ui::ThirdForm *ui;
    QString nameFromMain;
};

#endif // THIRDFORM_H
