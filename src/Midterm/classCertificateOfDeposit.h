#include "classBankAccount.h"

using namespace std;

class certificateOfDeposit: public bankAccount{
    public:
        certificateOfDeposit(string first, string last, int acctNum, double acctBal, double interest = 0.08, int maturityMonths = 6, double earlyPenalty = 0.05)
        :bankAccount(first,last,acctNum,acctBal),interest(interest),maturityMonths(maturityMonths),currMaturity(1),earlyPenalty(earlyPenalty){}

        void accountDeposit(double amount) override;
        void accountWithdraw(double amount) override;

    private:
        int maturityMonths;
        int currMaturity;
        double interest;        
        double earlyPenalty;
};

void certificateOfDeposit::accountDeposit(double amount){
    if(amount < 0){cerr<<"Cannot deposit negative amount" << endl; return;}
    else{setAccountBal(getAccountBal() + amount);}
}

void certificateOfDeposit::accountWithdraw(double amount){
    if(getAccountBal() < amount || amount < 0){cerr<<"Invalid withdraw amount"<<endl; return;}
    if(currMaturity == maturityMonths){setAccountBal(getAccountBal() - amount);}
    else{setAccountBal((getAccountBal() - amount)-(amount*earlyPenalty));}

}