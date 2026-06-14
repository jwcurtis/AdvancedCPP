#include "classBankAccount.h"

#include <iostream>
#include <string>
using namespace std;

class checkingAccount: public bankAccount{
    public:
        virtual void writeCheck(double checkAmount) = 0;
        
    private:
};