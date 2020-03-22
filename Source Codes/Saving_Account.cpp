#include "Saving_Account.h"

Saving_Account::Saving_Account(const std::string &name, const double &balance, const double &int_rate)
    :Account(name, balance), int_rate {int_rate} {}

bool Saving_Account::deposit(const double &amount) {
    if (amount < 0.0) return false;
    // amount += amount * (int_rate/100);
    return Account::deposit((amount * (int_rate/100)));
}

bool Saving_Account::withdraw(const double &amount) {
    return Account::withdraw(amount);
}

void Saving_Account::print(std::ostream &os) const {
    os << "[Saving Account: " << name << " balance: " << balance << " Interest rate: " << int_rate << "%]";
}
