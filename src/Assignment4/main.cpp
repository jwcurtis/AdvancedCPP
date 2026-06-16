#include <iostream>
#include <string>
#include "convertException.h"

using namespace std;

double inputFeet(){
    double feet;
    cout << "Enter feet: ";
    cin >> feet;
    if(cin.fail()){cin.clear();
        cin.ignore(10000, '\n');
        throw convertException("Invalid input. Please enter a valid number");}
    if(feet < 0){ throw convertException("Negative numbers are not allowed");}
    return feet;
}

double inputInches(){
    double inches;
    cout << "Enter inches: ";
    cin >> inches;
    if(cin.fail()){cin.clear();
        cin.ignore(10000, '\n');
        throw convertException("Invalid input. Please enter a valid number");}
    if(inches < 0){ throw convertException("Negative numbers are not allowed");}
    return inches;
}

double convertToCentimeters(double feet, double inches){
    double totalInches = feet * 12 + inches;
    return totalInches * 2.54;
}

int main(){
    
    double feet, inches;

    while(true){
        try{
            feet = inputFeet();
            inches = inputInches();
            cout << "You entered " << feet << " feet and " << inches << " inches." << endl;
            break;
        }
        catch(convertException error){
        cout << error.what() << ". Please try again." << endl;
        }
    }
    
    double centimeters = convertToCentimeters(feet, inches);
    cout << "This is equivalent to " << centimeters << " centimeters." << endl;

}