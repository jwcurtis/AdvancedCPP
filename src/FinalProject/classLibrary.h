#include <iostream>
#include <string>
#include <vector>
#include "classLibraryItem.h"
#include <stack>

using namespace std;

class Library{
    public:
        void addItem(libraryItem* newItem);
        void removeItem(int id);

        libraryItem* searchById(int id);
        libraryItem* searchByName(string name);

        void sortByYear();
        void sortById();
    private:
        vector<libraryItem*> items;
        stack<string> undoStack;
};

void Library::addItem(libraryItem* newItem){
    items.push_back(newItem);
}

void Library::removeItem(int id){
    try{
        libraryItem* refItem = searchById(id);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

libraryItem* Library::searchById(int id){
    for(libraryItem* item : items){
        if(item->getId() == id){
            return item;
        }
    }
    throw runtime_error("No item with that ID found!");
}

libraryItem* Library::searchByName(string name){
    for(libraryItem* item : items){
        if(item->getName() == name){
            return item;
        }
    }
    throw runtime_error("No item with that name found!");
}