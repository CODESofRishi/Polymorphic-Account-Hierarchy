#include <iostream>
#include <vector>
#include "Saving_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
using namespace std;

int main() {
    Account *obj = new Trust_Account("Rishi", 1250, 5.75);
    cout<<*obj<<endl;
    delete obj;

    vector<Account*> sav_acc {};
    sav_acc.push_back(new Saving_Account {});
    sav_acc.push_back(new Checking_Account {"Varun", 670});
    sav_acc.push_back(new Trust_Account {"Rishi", 1245, 5.45});

    withdraw(sav_acc, 90.5);
    deposit(sav_acc, 45.54);
    display(sav_acc);

    for (auto const &val: sav_acc)
        delete val;
    return 0;
}
