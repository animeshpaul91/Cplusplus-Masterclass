#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    : Account {name, balance}, int_rate{int_rate} {
}


virtual void Savings_Account::print(std::ostream &os) const override {
    os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "]";
}

virtual bool Savings_Account::deposit(double amount) override {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

virtual bool withdraw(double amount) override {
    return Account::withdraw(amount);
}

