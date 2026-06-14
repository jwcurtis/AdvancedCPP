#include "classBankAccount.h"
#include "classChecking.h"
#include "classNoServiceChargeChecking.h"

using namespace std;

class highInterestCheckingAccount: public noServiceChargeCheckingAccount{
    public:
    private:
        int interest;
        int minBalance;
        
};