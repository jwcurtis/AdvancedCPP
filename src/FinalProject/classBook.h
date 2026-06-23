#include <iostream>
#include <string>
using namespace std;

#include "classLibraryItem.h"

class Book: public libraryItem{
    friend ostream& operator<<(ostream&, const Book &);
    friend istream& operator>>(istream&, Book &);
    public:


        string getType() const;
        string getAuthor() const;
        int getPages() const;
    private:
        string author;
        int pages;
};

string Book::getType() const{
    return "Book";
}

string Book::getAuthor() const{
    return author;
}

int Book::getPages() const{
    return pages;
}

ostream& operator<<(ostream& osObject, const Book& Item){
    osObject << Item.getName() << ", written by: " << Item.getAuthor() << ". "
         << Item.getPages() << " pages long.";
    return osObject;
}