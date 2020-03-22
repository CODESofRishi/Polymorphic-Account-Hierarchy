#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include <string>
#include "Saving_Account.h"

class Trust_Account: public Saving_Account {
private:
    static double inspect_bal(const double &bal);
    static double inspect_rate(const double &rate);

protected:
    size_t cnt_withdraw;

public:
    Trust_Account(const std::string &name = "None", const double &balance = 0.0, const double &int_rate = 0.0);
    virtual bool deposit(const double &amount) override;
    virtual bool withdraw(const double &amount) override;
    virtual void print(std::ostream &os) const override;

    virtual ~Trust_Account() = default;
};

#endif // _TRUST_ACCOUNT_H_
