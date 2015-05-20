/**************************************************************************
** Qt Creator license header template
**   Special keywords: alessandro 20.05.2015 2015
**   Environment variables:
**   To protect a percent sign, use '%'.
**************************************************************************/

#include "lineeditstring.h"
#include "validatorstring.h"

LineEditString::LineEditString(const QRegExp &rx, QWidget *parent):
    LineEditValidate(parent)
{
    validator_ = new ValidatorString(rx, parent);
    this->setValidator(validator_);
    connect(validator_, SIGNAL(stateChanged(QValidator::State)), this, SLOT(onStateChanged(QValidator::State)));
}
