#ifndef VALIDATOR_H
#define VALIDATOR_H
#include <QValidator>

class Validator : public QValidator
{
    Q_OBJECT
public:
    virtual QValidator::State validate(QString &s, int &pos) const;

protected:
    explicit Validator(QObject *parent=0);
    virtual QValidator::State validateThis(QString &s, int &pos) const = 0;

    mutable  QValidator::State oldState_;

private:
    //Pre C++2011 hide by making private and don't implement
    explicit Validator(const Validator& rhs);
    Validator& operator= (const Validator& rhs);

signals:
    void stateChanged(QValidator::State s) const;

};
#endif // VALIDATOR_H
