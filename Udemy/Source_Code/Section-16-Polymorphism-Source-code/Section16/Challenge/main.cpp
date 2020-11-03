// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
    
    Checking_Account frank {"Frank", 5000};
    cout << frank << endl;
    
    Account *sav_acc = new Savings_Account("Animesh Paul", 10000, 5.0);
    cout << *sav_acc <<endl;
    
    Account *check_acc = new Checking_Account("Sandeep Gohain", 5000);
    Account *trust_acc = new Trust_Account("Boris Laishram", 7500, 5.0);
    
    vector<Account *> accounts {sav_acc, check_acc, trust_acc};
    display(accounts);
    deposit(accounts, 1000.00);
    withdraw(accounts, 1000);
    withdraw(accounts, 1000);
    withdraw(accounts, 1000);
    withdraw(accounts, 1000);
    
    delete sav_acc;
    delete check_acc;
    delete trust_acc;
    
    cout << endl;
    return 0;
}

