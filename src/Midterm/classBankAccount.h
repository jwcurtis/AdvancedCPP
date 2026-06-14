#include <iostream>
#include <string>
using namespace std;

class bankAccount{
    public:
        string getName() const;
        int getAccountNum() const;
        double getAccountBal () const;
        

    private:
        int accountNum;
        string firstName;
        string lastName;
        double accountBal;

};