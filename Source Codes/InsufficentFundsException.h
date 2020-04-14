#ifndef _INSUFFICENT_FUNDS_EXCEPTION_
#define _INSUFFICENT_FUNDS_EXCEPTION_

class InsufficentFundsException: public std::exception {
public:
    InsufficentFundsException() noexcept = default;
    ~InsufficentFundsException() = default;

    virtual const char* what() const noexcept {
        return "WARNING: Insufficent Fund !!";
    }
};

#endif // _INSUFFICENT_FUNDS_EXCEPTION_
