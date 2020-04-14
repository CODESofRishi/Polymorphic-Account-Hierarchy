#include <string>
#include "Checking_Account.h"

Checking_Account::Checking_Account(const std::string &name, const double &amount, const double &fee)
    :Account(name, amount), fee {fee} {}

bool Checking_Account::withdraw(const double &amount) {
    if (amount < 0) return false;
    return Account::withdraw(amount+fee);
}

bool Checking_Account::deposit(const double &amount) {
    return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &os) const {
    os << "[Checking Account: " << name << " Balance: " << balance << " Fee: " << fee <<"]";
}
