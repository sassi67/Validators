/**************************************************************************
** Qt Creator license header template
**   Special keywords: alessandro 20.05.2015 2015
**   Environment variables:
**   To protect a percent sign, use '%'.
**************************************************************************/

#include "lineeditvalidate.h"
#include "validator.h"
//-------------------------------------------------------------------------------------------
LineEditValidate::LineEditValidate(QWidget *parent) :
    QLineEdit(parent),
    validator_(NULL)
{
}
//-------------------------------------------------------------------------------------------
void LineEditValidate::onStateChanged(QValidator::State s)
{
    if (s == QValidator::Invalid)
        this->setStyleSheet("QLineEdit { background: rgb(255, 0, 0); }"); // red
    else if (s == QValidator::Intermediate)
        this->setStyleSheet("QLineEdit { background: rgb(255, 200, 0); }"); // orange
    else if (s == QValidator::Acceptable)
        this->setStyleSheet("QLineEdit { background: rgb(15, 200, 0); }"); // green
}
