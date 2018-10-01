#include "fmwindow.h"
#include "ui_fmwindow.h"
#include <iostream>

FmWindow::FmWindow(QWidget *parent) :
    QWidget(parent),
    start(new Ui::FmWindow)
{
    start->setupUi(this);
}

FmWindow::~FmWindow()
{
    delete start;
}

