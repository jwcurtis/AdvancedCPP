#include "classBankAccount.h"

#include <iostream>
#include <string>
using namespace std;

class checkingAccount: public bankAccount{
    public:
        checkingAccount(string first, string last, int acctNum, double acctBal)
        :bankAccount(first,last,acctNum,acctBal){}
        
        virtual void writeCheck(double checkAmount) = 0;

    protected:
};