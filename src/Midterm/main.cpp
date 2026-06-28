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
    string fName1 = "John";
    string lName1 = "Doe";
    certificateOfDeposit CDAccount("John","Doe",123,100.00);
    return 0;
}