#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QDoubleValidator>
#include <QVBoxLayout>
#include "validatordouble.h"
#include "validatorint.h"
#include "validatorstring.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    lay_(new QVBoxLayout(this)),
    editInt_(new QLineEdit(this)),
    editDouble_(new QLineEdit(this)),
    editString_(new QLineEdit(this)),
    validatorInt_(new ValidatorInt(-1, 1000,  this)),
    validatorDouble_(new ValidatorDouble(-0.1, 10.0, 2, this)),
    validatorString_(new ValidatorString(QRegExp("(once|\\d*)"),  this))
{

    connect(validatorInt_, SIGNAL(stateChanged(QValidator::State)), this, SLOT(onStateChanged(QValidator::State)));
    lay_->addWidget(editInt_);
    lay_->addWidget(editDouble_);
    lay_->addWidget(editString_);
//    setCentralWidget(lay_);

//    edit_->setValidator(validator_);
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onStateChanged(QValidator::State s)
{
//    if (s == QValidator::Invalid)
//        edit_->setStyleSheet("QLineEdit { background: rgb(255, 0, 0); }"); // red
//    else if (s == QValidator::Intermediate)
//        edit_->setStyleSheet("QLineEdit { background: rgb(255, 200, 0); }"); // orange
//    else if (s == QValidator::Acceptable)
//        edit_->setStyleSheet("QLineEdit { background: rgb(15, 200, 0); }"); // green
}
