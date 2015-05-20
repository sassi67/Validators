#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>
#include <QVBoxLayout>

#include "lineeditint.h"
#include "lineeditdouble.h"
#include "lineeditstring.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    lay_(new QVBoxLayout(this)),
    layInt_(new QHBoxLayout(this)),
    layDouble_(new QHBoxLayout(this)),
    layString_(new QHBoxLayout(this)),
    editInt_(new LineEditInt(-1, 1000,  this)),
    editDouble_(new LineEditDouble(-0.999, 999, 3, this)),
    editString_(new LineEditString(QRegExp("(once|[1-9]\\d+)"),  this)),
    labInt_(new QLabel(tr("Integer validator:"), this)),
    labDouble_(new QLabel(tr("Double validator:"), this)),
    labString_(new QLabel(tr("String validator:"), this))
{
    ui->setupUi(this);

    layInt_->addWidget(labInt_);
    layInt_->addWidget(editInt_);
    layDouble_->addWidget(labDouble_);
    layDouble_->addWidget(editDouble_);
    layString_->addWidget(labString_);
    layString_->addWidget(editString_);

    lay_->addLayout(layInt_);
    lay_->addLayout(layDouble_);
    lay_->addLayout(layString_);

    ui->centralWidget->setLayout(lay_);
}

MainWindow::~MainWindow()
{
    delete ui;
}

