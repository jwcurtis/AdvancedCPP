#include <iostream>
#include <string>
#include <queue>
using namespace std;

#include "classLibraryItem.h"

class DVD: public libraryItem{
    friend ostream& operator<<(ostream&, const DVD &);
    friend istream& operator>>(istream&, DVD &);
    public:
        string getType() const;
        string getStudio() const;
        int getDuration() const;

        DVD(string name, int id, int year, string studio, int duration);
    private:
        string studio;
        int duration;
};

DVD::DVD(string name, int id, int year,string studio, int duration)
    : libraryItem(name, id, year), studio(studio), duration(duration){
}

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