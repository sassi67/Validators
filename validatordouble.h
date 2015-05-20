#ifndef VALIDATORDOUBLE_H
#define VALIDATORDOUBLE_H
#include "validator.h"

class QDoubleValidator;

class ValidatorDouble : public Validator
{
    Q_OBJECT
public:
    ValidatorDouble(double bottom, double top, int decimals, QObject *parent=0);

protected:
    virtual QValidator::State validateThis(QString &s, int &pos) const;

private:
    //Pre C++2011 hide by making private and don't implement
    explicit ValidatorDouble(const ValidatorDouble& rhs);
    ValidatorDouble& operator= (const ValidatorDouble& rhs);

    QDoubleValidator *validator_;

};
#endif // VALIDATORDOUBLE_H



