#include <iostream>
#include <string>

using namespace std;

class negativeNum{};

int main(){
    int feet,inches;

    try{

        cout << "Input feet and inches to be converted to centimeters." << endl;

        cin >> feet >> inches;

        if(feet < 0 || inches < 0){throw negativeNum();}
    }
    catch(negativeNum error){

    }

}