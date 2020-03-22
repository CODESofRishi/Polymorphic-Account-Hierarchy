#include <iostream>
#include "Account_Util.h"

// Displays abstract Account objects in a vector of Account objects
void display(const std::vector<Account*> &accounts) {
    std::cout<<"\n==========Accounts=================================================="<<std::endl;
    for (auto const &acc: accounts)
        std::cout<<*acc<<std::endl;
}


// Deposits supplied amount to each abstract Account object in the vector
void deposit(std::vector<Account*> &accounts, double amount) {
    std::cout<<"\n==========Depositing to Accounts===================================="<<std::endl;
    for (auto &acc: accounts) {
        if (acc->deposit(amount))
            std::cout<<"Deposited "<<amount<<" to "<<*acc<<std::endl;
        else
            std::cout<<"Failed deposit of "<<amount<<" to "<<*acc<<std::endl;
    }
}

// Withdraw amount from each abstract Account object in the vector
void withdraw(std::vector<Account*> &accounts, double amount) {
    std::cout<<"\n==========Withdrawing from Accounts=================================="<<std::endl;
    for (auto &acc: accounts) {
        if (acc->withdraw(amount))
            std::cout<<"Withdrew "<<amount<<" from "<<*acc<<std::endl;
        else
            std::cout<<"Failed withdrawal of "<<amount<<" from "<<*acc<<std::endl;
    }
}
