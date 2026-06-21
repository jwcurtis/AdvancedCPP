#include <iostream>
#include <string>
using namespace std;

class libraryItem{
    public:
        virtual void setName(string name) = 0;
        virtual void setId(int id) = 0;

        virtual string getName() = 0;
        virtual int getId() = 0;
    private:
        string name;
        int id;
};