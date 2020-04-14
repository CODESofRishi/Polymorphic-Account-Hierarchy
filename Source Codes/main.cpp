#include <iostream>
#include <memory>
#include "Account.h"
#include "Saving_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "IllegalBalanceException.h"
#include "InsufficentFundsException.h"
using namespace std;

int main () {
    try {
        std::unique_ptr<Account> acc = std::make_unique<Saving_Account> ("Rishi", -100, 5.25);
        cout<<*acc<<endl;

        acc->deposit(50);
        cout<<*acc<<endl;

        acc->withdraw(200);
        cout<<*acc<<endl;
    }
    catch (const IllegalBalanceException &ex) {
        cerr<<ex.what()<<endl;
    }
    catch (const InsufficentFundsException &ex) {
        cerr<<ex.what()<<endl;
    }

    // try {
    //     std::unique_ptr<Account> acc = make_unique<Checking_Account> ("Rishi", 50, 34);
    //     acc->deposit(100);
    //     cout<<*acc<<endl;

    //     acc->withdraw(2000);
    //     cout<<*acc<<endl;
    //     // try {
    //     //     acc->withdraw(2000);
    //     //     cout<<*acc<<endl;
    //     // }
    //     // catch (const InsufficentFundsException &ex) {
    //     //     cerr<<ex.what()<<endl;
    //     // }
    // }
    // catch (const IllegalBalanceException &ex) {
    //     cerr<<ex.what()<<endl;
    // }
    // catch (const InsufficentFundsException &ex) {
    //     cerr<<ex.what()<<endl;
    // }
    cout<<"<<-- Program Continues ! -->>"<<endl;
    return 0;
}
