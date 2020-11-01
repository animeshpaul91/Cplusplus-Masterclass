#include "Trust_Account.h"


Trust_Account::Trust_Account(std::string name, double balance, double int_rate) 
: Savings_Account {name, balance, int_rate} {
    withdrawal_number = 0;
}

bool Trust_Account::deposit(double amount) {
    if (amount >= 5000.00)
        amount += 50.00;
    
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    double balance = get_balance();
    
    if (++withdrawal_number < 4 && amount < 0.2 * balance)
        return Savings_Account::withdraw(amount);
    return false;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}