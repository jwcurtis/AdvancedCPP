#include <iostream>
#include <string>
using namespace std;

class bankAccount{
    public:

        string getName() const;
        int getAccountNum() const;
        double getAccountBal () const;

        void setName(string first, string last);
        void setAccountNum(int num);
        void setAccountBal(double num);

        virtual void accountDeposit(double toDeposit) = 0;
        virtual void accountWithdraw(double toWithdraw) = 0;
        virtual void createStatement() = 0;

        bankAccount(string first, string last, int accountNum, double accountBal)
        : firstName(first), lastName(last),accountNum(accountNum),accountBal(accountBal){}
        
        virtual ~bankAccount() = default;

    protected:
        int accountNum;
        string firstName;
        string lastName;
        double accountBal;

};

string bankAccount::getName() const{
    return(firstName + " " + lastName);
}

int bankAccount::getAccountNum() const{
    return accountNum;
}

double bankAccount::getAccountBal() const{
    return accountBal;
}

void bankAccount::setName(string first, string last){
    firstName = first;
    lastName = last;
}

void bankAccount::setAccountNum(int num){
    accountNum = num;
}

void bankAccount::setAccountBal(double num){
    accountBal = num;
}