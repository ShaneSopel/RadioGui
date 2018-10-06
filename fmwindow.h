#ifndef FMWINDOW_H
#define FMWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QLCDNumber>
#include "mainwindow.h"

namespace Ui{
class FmWindow;
}

class FmWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FmWindow(QWidget *parent = 0);
    ~FmWindow();
    void updateAddFreq();
    void updateSubFreq();

private:
    Ui::FmWindow *ui;

    QLCDNumber     *lcdscreen;
    QPushButton    *upbutton;
    QPushButton    *downbutton;
    QPushButton    *scanbutton;
    QPushButton    *homebutton;

    double fmfreq;


private slots:
    void upbutton_clicked();
    void downbutton_clicked();
    void scanbutton_clicked();
    void homebutton_clicked();

}; //end class FmWindow
#endif // FMWINDOW_H
