#include "classBankAccount.h"
#include "classChecking.h"

using namespace std;

class noServiceChargeCheckingAccount: public checkingAccount{
    public:
        noServiceChargeCheckingAccount(string first, string last, int acctNum, double acctBal, double interest = 0.05, double minBal = 500)
        :checkingAccount(first, last, acctNum, acctBal),interest(interest),minBalance(minBal){}
    
        double getInterest() const;
        double getMinBalance() const;

        void accountWithdraw(double amount) override;
        void createStatement() override;
        void writeCheck(bankAccount* checkReceiver, double amount) override;

        
    private:
        double interest;
        double minBalance;
        
};

double noServiceChargeCheckingAccount::getInterest() const{
    return interest;
}

double noServiceChargeCheckingAccount::getMinBalance() const{
    return minBalance;
}

void noServiceChargeCheckingAccount::accountWithdraw(double amount){
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

void noServiceChargeCheckingAccount::createStatement(){
    cout << "Account statement for: " << getName() << endl;
    cout << "Account type: No Service Charge Checking Account" << endl;
    cout << "Account number: " << getAccountNum() << endl;
    cout << "Account balance: " << getAccountBal() << endl;
    cout << "Account interest: " << (interest) << endl;
}

void noServiceChargeCheckingAccount::writeCheck(bankAccount* checkReceiver, double amount){
    try
    {
    accountWithdraw(amount);
    checkReceiver->accountDeposit(amount);
    }
    catch(const char* error)
    {
        cerr << error << endl;
    }
    
}