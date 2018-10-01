#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void openFM();

private:
    Ui::MainWindow *ui;
    QPushButton *fmbutton;
    QPushButton *skywarnbutton;
    QPushButton *hambutton;
    QPushButton *policebutton;

private slots:
    void fmbutton_clicked();
    void skywarnbutton_clicked();
    void hambutton_clicked();
    void policebutton_clicked();
};


#endif // MAINWINDOW_H
