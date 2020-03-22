#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Saving_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

// all below are regular functions

// utility helper functions for abstract Account class

void display(const std::vector<Account*> &accounts);
void deposit(std::vector<Account*> &accounts, double amount);
void withdraw(std::vector<Account*> &accounts, double amount);

#endif // _ACCOUNT_UTIL_H_
