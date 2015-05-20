#ifndef VALIDATORSTRING_H
#define VALIDATORSTRING_H
#include "validator.h"

class QRegExpValidator;

class ValidatorString : public Validator
{
    Q_OBJECT
public:
    ValidatorString(const QRegExp &rx,  QObject *parent=0);

protected:
    virtual QValidator::State validateThis(QString &s, int &pos) const;

private:
    //Pre C++2011 hide by making private and don't implement
    explicit ValidatorString(const ValidatorString& rhs);
    ValidatorString& operator= (const ValidatorString& rhs);

    QRegExpValidator *validator_;
};

#endif // VALIDATORSTRING_H
