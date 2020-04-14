#ifndef _ILLEGAL_BALANCE_EXCEPTION_H_
#define _ILLEGAL_BALANCE_EXCEPTION_H_

#include <string>

class IllegalBalanceException: public std::exception {
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;

    virtual const char* what() const noexcept {
        return "WARNING: Illegal Balance !!!";
    }
};

#endif // _ILLEGAL_BALANCE_EXCEPTION_H_
