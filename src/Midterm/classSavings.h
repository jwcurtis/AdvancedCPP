#pragma once

#include "classBankAccount.h"

using namespace std;

class savingsAccount: public bankAccount{
    public:
        savingsAccount(string first, string last, int acctNum, double acctBal, double interest = 0)
        :bankAccount(first,last,acctNum,acctBal), interest(interest){}

        double getInterest() const;

        void accountDeposit(double amount) override;
        void accountWithdraw(double amount) override;
        void createStatement() override;

    private:
        double interest;        
};

void savingsAccount::createStatement(){
    cout << "Account statement for: " << getName() << endl;
    cout << "Account type: Savings" << endl;
    cout << "Account number: " << getAccountNum() << endl;
    cout << "Account balance: " << getAccountBal() << endl;
    cout << "Account interest: " << (interest) << endl;
}

double savingsAccount::getInterest() const{
    return interest;
}

void savingsAccount::accountDeposit(double amount){
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

void savingsAccount::accountWithdraw(double amount){
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