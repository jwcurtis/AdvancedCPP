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
    
    libraryItem* refItem = searchById(id);

    for(auto iterator = items.begin(); iterator != items.end(); ++iterator){
        if(*iterator == refItem){
            delete *iterator;
            items.erase(iterator);
            return;
        }
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