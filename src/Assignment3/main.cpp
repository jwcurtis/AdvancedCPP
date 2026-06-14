#include <iostream>
using namespace std;

#include "rectangleClass.h"

int main(){
    rectangleType rect1(27,53);
    rectangleType rect2(5,2);
    rectangleType rect3(53,27);
    rectangleType rect4(1,10);
    rectangleType rect5;

    cout << "Empty rectangle: " << rect5 << endl;
    cout << "Input legnth and width for empty rectangle." << endl;
    cin >> rect5;
    cout << "Updated rectangle values: " << rect5 << endl;

    cout << "Length: " << rect5.getLength() << ". Width: " << rect5.getWidth() << endl;
    cout << "Area: " << rect5.area() << ". Perimeter: " << rect5.perimeter() << endl;
    cout << "Print: " << rect5 << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 2: " << rect2 << endl;
    cout << "Rectangle 1 + 2: " << rect1+rect2 << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 2: " << rect2 << endl;
    cout << "Rectangle 1 - 2: " << rect1-rect2 << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 2: " << rect2 << endl;
    cout << "Rectangle 1 * 2: " << rect1*rect2 << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 2: " << rect2 << endl;
    cout << "Rectangle 1 / 2: " << rect1/rect2 << endl;

    cout << "Rectangle 5: " << rect5 << endl;
    cout << "++Rectangle 5: " << ++rect5 << endl;

    cout << "Rectangle 5: " << rect5 << endl;
    cout << "Rectangle 5++: " << rect5++ << endl;

    cout << "Rectangle 5: " << rect5 << endl;
    cout << "--Rectangle 5: " << --rect5 << endl;

    cout << "Rectangle 5: " << rect5 << endl;
    cout << "Rectangle 5--: " << rect5-- << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 2: " << rect2 << endl;
    cout << "Rectangle 1 == 2: " << (rect1 == rect2) << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 3: " << rect3 << endl;
    cout << "Rectangle 1 == 3: " << (rect1 == rect3) << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 2: " << rect2 << endl;
    cout << "Rectangle 1 != 2: " << (rect1 != rect2) << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 3: " << rect3 << endl;
    cout << "Rectangle 1 != 3: " << (rect1 != rect3) << endl;

    

    cout << "Rectangle 1: " << rect1 << ". Rectangle 2: " << rect2 << endl;
    cout << "Rectangle 1 > 2: " << (rect1 > rect2) << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 3: " << rect3 << endl;
    cout << "Rectangle 1 >= 3: " << (rect1 >= rect3) << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 2: " << rect2 << endl;
    cout << "Rectangle 1 < 2: " << (rect1 < rect2) << endl;

    cout << "Rectangle 1: " << rect1 << ". Rectangle 3: " << rect3 << endl;
    cout << "Rectangle 1 <= 3: " << (rect1 <= rect3) << endl;

    return 0;
}