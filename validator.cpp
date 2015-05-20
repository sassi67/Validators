#include "validator.h"

Validator::Validator(QObject *parent) :
    QValidator(parent),
    oldState_(QValidator::Invalid)
{
}

QValidator::State Validator::validate(QString &s, int &pos) const
{
    QValidator::State state = validateThis(s, pos);

    if (oldState_ != state)
    {
        oldState_ = state;
        emit stateChanged(state);
    }

    return state;
}
