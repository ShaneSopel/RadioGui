#ifndef FMWINDOW_H
#define FMWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>

namespace Ui {
class FmWindow;
}

class FmWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FmWindow(QWidget *parent = 0);
    ~FmWindow();

private:
    Ui::FmWindow *start;

};

#endif // FMWINDOW_H
