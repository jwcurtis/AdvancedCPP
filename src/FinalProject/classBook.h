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

        Book(string name, int id, int year,string author, int pages);

    private:
        string author;
        int pages;
        
};

Book::Book(string name, int id, int year,string author, int pages)
    : libraryItem(name, id, year), author(author), pages(pages){
}

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