#ifndef __INSUFFICIENT_FUNDS_EXCEPTION_H__
#define __INSUFFICIENT_FUNDS_EXCEPTION_H__

using namespace std;

class InsufficientFundsException: public exception
{
public:
    InsufficientFundsException() {}
    ~InsufficientFundsException() {}
    virtual const char* what() const noexcept {
        return "You cannot withdraw an amount more than your account balance";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
