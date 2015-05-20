#ifndef VALIDATORINT_H
#define VALIDATORINT_H
#include "validator.h"

class QIntValidator;

class ValidatorInt : public Validator
{
    Q_OBJECT
public:
    ValidatorInt(int bottom, int top, QObject *parent=0);

protected:
    virtual QValidator::State validateThis(QString &s, int &pos) const;

private:
    //Pre C++2011 hide by making private and don't implement
    explicit ValidatorInt(const ValidatorInt& rhs);
    ValidatorInt& operator= (const ValidatorInt& rhs);

    QIntValidator *validator_;
};

#endif // VALIDATORINT_H
