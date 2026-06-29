#pragma once

#include "classBankAccount.h"
#include "classChecking.h"

using namespace std;

class serviceChargeCheckingAccount: public checkingAccount{
    public:
        serviceChargeCheckingAccount(string first, string last, int acctNum, double acctBal, int monthlyChecks = 10)
        :checkingAccount(first, last, acctNum, acctBal),monthlyChecks(monthlyChecks){}
    
        void createStatement() override;
        void writeCheck(bankAccount* checkReceiver, double amount) override;

        private:
            int monthlyChecks;
        
};

void serviceChargeCheckingAccount::createStatement(){
    cout << "Account statement for: " << getName() << endl;
    cout << "Account type: Service Charge Checking Account" << endl;
    cout << "Account number: " << getAccountNum() << endl;
    cout << "Account balance: " << getAccountBal() << endl;
    cout << "Checks remaining: " << (monthlyChecks) << endl;
}

void serviceChargeCheckingAccount::writeCheck(bankAccount* checkReceiver, double amount){
    if(amount < 0){
        cerr<<"Cannot write check for non positive amount."<<endl;
        return;
    }

    if((getAccountBal() - amount) < 0){
        cerr<<"Cannot write check past the minimum account balance."<<endl;
        return;
    }


    accountWithdraw(amount);
    checkReceiver->accountDeposit(amount);

}