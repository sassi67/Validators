#include "validatorstring.h"
//-------------------------------------------------------------------------------------------
ValidatorString::ValidatorString(const QRegExp &rx, QObject *parent):
    Validator(parent),
    validator_(new QRegExpValidator(rx, parent))
{

}
//-------------------------------------------------------------------------------------------
QValidator::State ValidatorString::validateThis(QString &s, int &pos) const
{
    return validator_->validate(s, pos);
}
