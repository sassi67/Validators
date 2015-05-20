#include "validatorint.h"

ValidatorInt::ValidatorInt(int bottom, int top, QObject *parent):
    Validator(parent),
    validator_(new QIntValidator(bottom, top, parent))
{

}

QValidator::State ValidatorInt::validateThis(QString &s, int &pos) const
{
    return validator_->validate(s, pos);
}
