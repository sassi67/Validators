/**************************************************************************
** Qt Creator license header template
**   Special keywords: alessandro 20.05.2015 2015
**   Environment variables:
**   To protect a percent sign, use '%'.
**************************************************************************/

#include "lineeditint.h"
#include "validatorint.h"

LineEditInt::LineEditInt(int bottom, int top, QWidget *parent):
    LineEditValidate(parent)
{
    validator_ = new ValidatorInt(bottom, top, parent);
    this->setValidator(validator_);
    connect(validator_, SIGNAL(stateChanged(QValidator::State)), this, SLOT(onStateChanged(QValidator::State)));
}

