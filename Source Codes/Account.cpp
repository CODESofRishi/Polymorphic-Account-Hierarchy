#include "Account.h"
#include "IllegalBalanceException.h"
#include "InsufficentFundsException.h"

Account::Account(const std::string &name, const double &balance)
    :name {name}, balance {balance} {
        if (balance < 0.0)
            throw IllegalBalanceException {};
    }

bool Account::deposit(const double &amount) {
    if (amount < 0) return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(const double &amount) {
    if (balance-amount >= 0) {
        balance -= amount;
        return true;
    }
    else throw InsufficentFundsException {};
}

double Account::get_balance() const {
    return balance;
}

void Account::print(std::ostream &os) const {
    os << "[Account: " << name << " Balance: " << balance << "]";
}
