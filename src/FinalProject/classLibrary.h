#include <iostream>
#include <string>
#include <vector>
#include "classLibraryItem.h"
#include <stack>

using namespace std;

class Library{
    public:

        Library();
        ~Library();

        void addItem(libraryItem* newItem);
        void removeItem(int id);

        libraryItem* searchById(int id);
        libraryItem* searchByName(string name);

        void sortByYear();
        void sortById();
    private:
        vector<libraryItem*> items;
        stack<string> undoStack;
        int undoLimit;
};

Library::~Library(){
    for(libraryItem* item : items){
        delete item;
    }
}

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
    throw runtime_error("Error deleting object!");
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

void Library::sortByYear(){
    libraryItem* temp;
    for (size_t iteration = 1; iteration < items.size(); iteration++){
        for( size_t index = 0; index < items.size() - iteration; index++){
            if(items[index]->getYear() > items[index + 1]->getYear()){
                temp = items[index];
                items[index] = items[index + 1];
                items[index + 1] = temp;
            }
        }
    }
}

void Library::sortById(){
    libraryItem* temp;
    for (size_t iteration = 1; iteration < items.size(); iteration++){
        for( size_t index = 0; index < items.size() - iteration; index++){
            if(items[index]->getId() > items[index + 1]->getId()){
                temp = items[index];
                items[index] = items[index + 1];
                items[index + 1] = temp;
            }
        }
    }
}