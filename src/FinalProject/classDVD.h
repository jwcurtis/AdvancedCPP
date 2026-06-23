#include <iostream>
#include <string>
using namespace std;

#include "classLibraryItem.h"

class DVD: public libraryItem{
    friend ostream& operator<<(ostream&, const DVD &);
    friend istream& operator>>(istream&, DVD &);
    public:
        string getType() const;
        string getStudio() const;
        int getDuration() const;
    private:
        string studio;
        int duration;
};

string DVD::getType() const{
    return "DVD";
}

string DVD::getStudio() const{
    return studio;
}

int DVD::getDuration() const{
    return duration;
}

ostream& operator<<(ostream& osObject, const DVD& Item){
    osObject << Item.getName() << ", created by: " << Item.getStudio() << ". "
         << Item.getDuration() << " minutes long.";
    return osObject;
}