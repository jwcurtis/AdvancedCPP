#include <iostream>
#include <string>
using namespace std;

#include "classLibraryItem.h"

class Book: public libraryItem{
    public:
        string getType();
        void display();
    private:
        string author;
        int pages;
};

string Book::getType(){
    return "Book";
}

void Book::display(){

}