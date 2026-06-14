#include <iostream>
#include <string>
using namespace std;

class bankAccount{
    public:

        string getName() const;
        int getAccountNum() const;
        double getAccountBal () const;

        virtual void accountDeposit(double toDeposit) = 0;
        virtual void accountWithdraw(double toWithdraw) = 0;
        virtual void createStatement() = 0;



    private:
        int accountNum;
        string firstName;
        string lastName;
        double accountBal;

};