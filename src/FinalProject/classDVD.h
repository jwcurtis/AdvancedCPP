#include <iostream>
#include <string>
using namespace std;

#include "classLibraryItem.h"

class DVD: public libraryItem{
    public:
        string getType();
        void display();
    private:
        string artist;
        int duration;
};

string DVD::getType(){
    return "DVD";
}

void DVD::display(){
    
}