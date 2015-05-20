/**************************************************************************
** Qt Creator license header template
**   Special keywords: alessandro 20.05.2015 2015
**   Environment variables:
**   To protect a percent sign, use '%'.
**************************************************************************/

#include "lineeditdouble.h"
#include "validatordouble.h"
//-------------------------------------------------------------------------------------------
LineEditDouble::LineEditDouble(double bottom, double top, int decimals, QWidget *parent):
    LineEditValidate(parent)
{
    validator_ = new ValidatorDouble(bottom, top, decimals, parent);
    this->setValidator(validator_);
    connect(validator_, SIGNAL(stateChanged(QValidator::State)), this, SLOT(onStateChanged(QValidator::State)));
}
//-------------------------------------------------------------------------------------------
LineEditDouble::LineEditDouble(double bottom, double top, int decimals, QDoubleValidator::Notation notation, QWidget *parent):
    LineEditValidate(parent)
{
    validator_ = new ValidatorDouble(bottom, top, decimals, notation, parent);
    this->setValidator(validator_);
    connect(validator_, SIGNAL(stateChanged(QValidator::State)), this, SLOT(onStateChanged(QValidator::State)));
}
