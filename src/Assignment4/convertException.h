#include <iostream>
#include <string>

using namespace std;

class convertException{
    public: 
        convertException(){message = "Error detected!";}
        convertException(string str){ message = str;}
        string what(){return message;}
    private:
        string message;
};