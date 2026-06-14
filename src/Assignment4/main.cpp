#include <iostream>
#include <string>
#include "convertException.h"

using namespace std;

double inputFeet(int feet){
    if(feet < 0){ throw convertException("Negative numbers are not allowed");}
}

double inputInches(int inches){
    if(inches < 0){ throw convertException("Negative numbers are not allowed");}
}

int main(){


    try{

        
    }
    catch(convertException error){
        cout << error.what() << " caugh in main." << endl;
    }

}