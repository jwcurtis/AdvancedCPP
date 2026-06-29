#pragma once

#include "classBankAccount.h"

#include <iostream>
#include <string>
using namespace std;

class checkingAccount: public bankAccount{
    public:
        checkingAccount(string first, string last, int acctNum, double acctBal)
        :bankAccount(first,last,acctNum,acctBal){}

        void accountDeposit(double amount) override;
        void accountWithdraw(double amount) override;

        virtual void writeCheck(bankAccount* checkReceiver, double checkAmount) = 0;

    protected:
};

void checkingAccount::accountDeposit(double amount){
        try
    {
        if(amount < 0){
            throw"Cannot deposit negative value.";
        }
        else{setAccountBal(getAccountBal() + amount);}
    }
    catch(const char* error)
    {
        cerr << error << endl;
    }
}

void checkingAccount::accountWithdraw(double amount){
    try
    {
        if((getAccountBal() - amount) < 0){
            throw"Cannot withdraw more than account balance.";
        }
        else{setAccountBal(getAccountBal() - amount);}
    }
    catch(const char* error)
    {
        cerr << error << endl;
    }
    
}