#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    unique_ptr<Checking_Account> check_acc;
    
    try  {
        check_acc = make_unique<Checking_Account> ("Animesh Paul", -100.00);
    }
    catch (const IllegalBalanceException &ex)
    {
        cerr << ex.what() << endl;
    }
    
    try {
        check_acc.reset();
        check_acc = make_unique<Checking_Account> ("Animesh Paul", 100.00);
        check_acc->withdraw(200.00);
    }
    catch (const IllegalBalanceException &ex)
    {
        cerr << ex.what() << endl;
    }
    catch (const InsufficientFundsException &ex)
    {
        cerr << ex.what() << endl;
    }
    
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

