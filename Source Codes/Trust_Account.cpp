#include <string>
#include "Trust_Account.h"

Trust_Account::Trust_Account(const std::string &name, const double &balance, const double &int_rate)
    :Saving_Account::Saving_Account(name, balance, int_rate), cnt_withdraw {0} {}

bool Trust_Account::deposit(const double &amount) {
    if (amount < 0.0) return false;
    // amount += ((amount >= 5000.00) ? 50.00 : 0.0);
    return Saving_Account::deposit(((amount >= 5000.00) ? amount+50.00 : amount));
}

bool Trust_Account::withdraw(const double &amount) {
    if (cnt_withdraw < 3 && amount <= (balance*20)/100) {
        ++cnt_withdraw;
        return Account::withdraw(amount);
    }
    else return false;
}

void Trust_Account::print(std::ostream &os) const {
    os << "[Trust Account: " << name << " Balance: " << balance << " Interest: " << int_rate << "]";
}
