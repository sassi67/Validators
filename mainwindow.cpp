#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>

#include "lineeditint.h"
#include "lineeditdouble.h"
#include "lineeditstring.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    lay_(new QVBoxLayout(this)),
    editInt_(new LineEditInt(-1, 1000,  this)),
    editDouble_(new LineEditDouble(-0.999, 999, 3, this)),
    editString_(new LineEditString(QRegExp("(once|[1-9]\\d{0, 4})"),  this))
{
    ui->setupUi(this);

    lay_->addWidget(editInt_);
    lay_->addWidget(editDouble_);
    lay_->addWidget(editString_);

    ui->centralWidget->setLayout(lay_);
}

MainWindow::~MainWindow()
{
    delete ui;
}

