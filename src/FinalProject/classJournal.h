#include <iostream>
#include <string>
using namespace std;

#include "classLibraryItem.h"

class Journal: public libraryItem{
    friend ostream& operator<<(ostream&, const Journal &);
    friend istream& operator>>(istream&, Journal &);
    public:
        string getType() const;
        int getIssue() const;
        int getPages() const;
    private:
        int issueNum;
        int pages;
};

string Journal::getType() const{
    return "Journal";
}

int Journal::getIssue() const{
    return issueNum;
}

int Journal::getPages() const{
    return pages;
}

ostream& operator<<(ostream& osObject, const Journal& Item){
    osObject << Item.getName() << ", issue number: " << Item.getIssue() << ". "
         << Item.getPages() << " pages long.";
    return osObject;
}