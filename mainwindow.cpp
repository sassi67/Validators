#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>
//#include <QVBoxLayout>
#include <QFormLayout>

#include "lineeditint.h"
#include "lineeditdouble.h"
#include "lineeditstring.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    frmLay_(new QFormLayout(this)),
    editInt_(new LineEditInt(-10, 1000,  this)),
    editDouble_(new LineEditDouble(-0.05, 2000.0, 2, this)),
    editString_(new LineEditString(QRegExp("(once|[1-9]\\d{,2})"), this)),
    editScientific_(new LineEditString(QRegExp("(\\+|\\-)?(?:0|[1-9]\\d*)(?:\\.\\d*)?(?:[eE](\\+|\\-)?\\d+)?"), this))
{
    ui->setupUi(this);

    frmLay_->addRow(tr("Integer validator:"), editInt_);
    frmLay_->addRow(tr("Double validator:"), editDouble_);
    frmLay_->addRow(tr("String validator:"), editString_);
    frmLay_->addRow(tr("Scientific notation validator:"), editScientific_);

    ui->centralWidget->setLayout(frmLay_);
}

MainWindow::~MainWindow()
{
    delete ui;
}

