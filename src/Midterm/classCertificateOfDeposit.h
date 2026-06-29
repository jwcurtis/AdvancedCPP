#pragma once

#include "classBankAccount.h"

using namespace std;

class certificateOfDeposit: public bankAccount{
    public:
        certificateOfDeposit(string first, string last, int acctNum, double acctBal, double interest = 0.08, int maturityMonths = 6, double earlyPenalty = 0.05)
        :bankAccount(first,last,acctNum,acctBal),interest(interest),maturityMonths(maturityMonths),currMaturity(1),earlyPenalty(earlyPenalty){}

        void createStatement() override;
        void accountDeposit(double amount) override;
        void accountWithdraw(double amount) override;

        void setMaturity(int months);

        int getMaturity() const;
        double getInterest() const;
        double getPenalty() const;

    private:
        double interest;  
        int maturityMonths;
        int currMaturity;
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

void certificateOfDeposit::setMaturity(int months){
    if (currMaturity < 0){ currMaturity = 0;}
    else{currMaturity = months;}
}

int certificateOfDeposit::getMaturity() const{
    return currMaturity;
}

double certificateOfDeposit::getInterest() const{
    return interest;
}

double certificateOfDeposit::getPenalty() const{
    return earlyPenalty;
}

void certificateOfDeposit::createStatement(){
    cout << "Account statement for: " << getName() << endl;
    cout << "Account type: Certificate of Deposit" << endl;
    cout << "Account number: " << getAccountNum() << endl;
    cout << "Account balance: " << getAccountBal() << endl;
    cout << "Account interest: " << getInterest() << endl;
    cout << "Account maturity: " << (getMaturity()) << endl;
    cout << "Early withdraw penalty: " << getPenalty() << endl;
}