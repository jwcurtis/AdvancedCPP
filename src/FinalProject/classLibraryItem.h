#include <iostream>
#include <string>
using namespace std;

class libraryItem{
    public:
        void setName(string name);
        void setId(int id);
        void setYear(int year);

        string getName() const;
        int getId() const;
        int getYear() const;

        virtual void getType() = 0;
        virtual void display() = 0;

        libraryItem(string name, int id, int year);
        virtual ~libraryItem();

    private:
        string name;
        int id;
        int year;
};

void libraryItem::setName(string inName){
    name = inName;
}

void libraryItem::setId(int inId){
    id = inId;
}

void libraryItem::setYear(int inYear){
    year = inYear;
}

string libraryItem::getName() const{
    return name;
}

int libraryItem::getId() const{
    return id;
}

int libraryItem::getYear() const{
    return year;
}

libraryItem::libraryItem(string name, int id, int year){
    this-> name = name;
    this-> id = id;
    this-> year = year;
}