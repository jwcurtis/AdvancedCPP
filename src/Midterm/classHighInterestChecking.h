#include "classBankAccount.h"
#include "classChecking.h"
#include "classNoServiceChargeChecking.h"

using namespace std;

class highInterestCheckingAccount: public noServiceChargeCheckingAccount{
    public:
    highInterestCheckingAccount(string first, string last, int acctNum, double acctBal, double interest = 0.15, double minBal = 1500)
    :noServiceChargeCheckingAccount(first, last, acctNum, acctBal,interest,minBal){}

    void createStatement() override;
};

void highInterestCheckingAccount::createStatement(){
    cout << "Account statement for: " << getName() << endl;
    cout << "Account type: High Interest Checking Account" << endl;
    cout << "Account number: " << getAccountNum() << endl;
    cout << "Account balance: " << getAccountBal() << endl;
    cout << "Account interest: " << (getInterest()) << endl;
}
