#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

using namespace std;

class IllegalBalanceException: public exception
{
public:
    IllegalBalanceException() {}
    ~IllegalBalanceException() {}
    virtual const char* what() const noexcept {
        return "Illegal balance. Balance cannot be negative";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__
