#pragma once

#include "classBankAccount.h"
#include "classSavings.h"

using namespace std;

class highInterestSavingsAccount: public savingsAccount{
    public:
        highInterestSavingsAccount(string first, string last, int acctNum, double acctBal, double interest = 0.025, double minBal = 250)
        :savingsAccount(first,last,acctNum,acctBal,interest), minBalance(minBal){}

        void accountWithdraw(double amount) override;
        void createStatement() override;

    private:
        double minBalance;      
};

void highInterestSavingsAccount::createStatement(){
    cout << "Account statement for: " << getName() << endl;
    cout << "Account type: Savings" << endl;
    cout << "Account number: " << getAccountNum() << endl;
    cout << "Account balance: " << getAccountBal() << endl;
    cout << "Account interest: " << (getInterest()) << endl;
    cout << "Minimum balance: " << minBalance << endl;
}

void highInterestSavingsAccount::accountWithdraw(double amount){
    try
    {
        if((getAccountBal() - amount) < minBalance){
            throw"Cannot withdraw past the minimum account balance.";
        }
        else{setAccountBal(getAccountBal() - amount);}
    }
    catch(const char* error)
    {
        cerr << error << endl;
    }
    
}