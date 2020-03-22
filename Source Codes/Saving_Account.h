#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_
#include "Account.h"

/*
Saving Account is a type of Account
adds an interest rate
Withdraw - same as a regular account
Deposit:
    Amount supplied to deposit will be incremented by (amount * int_rate/100)
    and then the updated amount will be deposited
*/

class Saving_Account: public Account {
private:
    // default constants
    static constexpr const char *def_name = "Unnamed Saving Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;

protected:
    double int_rate;

public:
    Saving_Account(const std::string &name = def_name, const double &balance = def_balance, const double &int_rate = def_int_rate);
    virtual bool deposit(const double &amount) override;
    virtual bool withdraw(const double &amount) override;
    virtual void print(std::ostream &os) const override;

    virtual ~Saving_Account() = default;
};

#endif // _SAVING_ACCOUNT_H_
