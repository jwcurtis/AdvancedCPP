#include <iostream>
#include <string>
using namespace std;

class User{
    public:
        void setName(string name);
        void setId(int userId);

        string getName() const;
        int getId() const;

        User(string name, int userId);
    private:
        string name;
        int userId;
};

void User::setName(string name){
    this->name = name;
}

void User::setId(int userId){
    this->userId = userId;
}

string User::getName() const{
    return name;
}

int User::getId() const{
    return userId;
}

User::User(string name, int userId){
    this-> name = name;
    this-> userId = userId;
}