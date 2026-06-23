#include <iostream>
#include <string>
using namespace std;

#include "classLibraryItem.h"

class Journal: public libraryItem{
    public:
        string getType();
        void display();
    private:
        int issueNum;
        int pages;
};

string Journal::getType(){
    return "Journal";
}

void Journal::display(){
    
}