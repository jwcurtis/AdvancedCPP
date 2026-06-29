#include "classBankAccount.h"
#include "classCertificateOfDeposit.h"
#include "classChecking.h"
#include "classHighInterestChecking.h"
#include "classHighInterestSavings.h"
#include "classNoServiceChargeChecking.h"
#include "classSavings.h"
#include "classServiceChargeChecking.h"

#include <iostream>
#include <string>

using namespace std;

int main(){
    certificateOfDeposit CDAccount("John","Doe",123,23461.00);

    cout << "Testing CD account: " << endl;
    CDAccount.createStatement();
    cout << "Testing CD account deposit: " << endl;
    CDAccount.accountDeposit(500.00);
    CDAccount.createStatement();
    cout << "Testing CD account early withdraw: " << endl;
    CDAccount.accountWithdraw(500);
    CDAccount.createStatement();
    cout << "Testing CD account set maturity and mature withdraw: " << endl;
    CDAccount.setMaturity(6);
    CDAccount.accountWithdraw(500);
    CDAccount.createStatement();

    highInterestCheckingAccount HICAccount("Jane","Doe", 456, 500.00);
    HICAccount.createStatement();

    highInterestSavingsAccount HISAccount("Bob","Builder",246,1000.00);
    HISAccount.createStatement();

    noServiceChargeCheckingAccount NSCCAccount("Abdullah","Mohamed",321,100000.00);
    NSCCAccount.createStatement();

    savingsAccount SAccount("Cecilia","Stewart",543,15000.00);
    SAccount.createStatement();

    serviceChargeCheckingAccount SCCAccount("Jacob","Curtis",789,99992.00);
    SCCAccount.createStatement();
    
    cout << "Testing check from Jacob to Bob for $1000" << endl;
    SCCAccount.writeCheck(&HISAccount,1000.00);
    SCCAccount.createStatement();
    HISAccount.createStatement();

    cout << "Testing check from Jacob to Bob for $1000000000000" << endl;
    SCCAccount.writeCheck(&HISAccount,1000000000000.00);
    SCCAccount.createStatement();
    HISAccount.createStatement();
    return 0;
}