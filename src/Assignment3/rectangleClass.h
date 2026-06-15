#include <iostream>
using namespace std;

class rectangleType{
    friend ostream& operator<<(ostream&, const rectangleType &);
    friend istream& operator>>(istream&, rectangleType &);
    public:
        void setDimensions(double length, double width);
        double getLength() const;
        double getWidth() const;
        double area() const;
        double perimeter() const;
        void print() const;

        //Operator overloads
        rectangleType operator+(const rectangleType&) const;
        rectangleType operator-(const rectangleType&) const;
        rectangleType operator*(const rectangleType&) const;
        rectangleType operator/(const rectangleType&) const;

        rectangleType& operator++(); //preincrement
        rectangleType operator++(int); //postincrement
        rectangleType& operator--(); //predecrement
        rectangleType operator--(int); //postdecrement

        bool operator==(const rectangleType&) const;
        bool operator!=(const rectangleType&) const;
        bool operator<=(const rectangleType&) const;
        bool operator<(const rectangleType&) const;
        bool operator>=(const rectangleType&) const;
        bool operator>(const rectangleType&) const;

        //Constructors
        rectangleType();
        rectangleType(double length, double width);

    protected:
        double length;
        double width;
};

void rectangleType::setDimensions(double length, double width){
    if(length > 0)
        this->length = length;
    else this->length = 0;

    if(width > 0)
        this->width = width;
    else this->width = 0;
}

double rectangleType::getLength() const{
    return length;
}

double rectangleType::getWidth() const{
    return width;
}

double rectangleType::area() const{
    return length*width;
}

double rectangleType::perimeter() const{
    return 2*(length + width);
}

void rectangleType::print() const{
    cout << "Length = " << length
         << "; Width: " << width << endl;
}

rectangleType::rectangleType(double length, double width){
    setDimensions(length,width);
}

rectangleType::rectangleType(){
    length = 0;
    width = 0;
}

//Overloads
rectangleType& rectangleType::operator++(){
    ++length;
    ++width;
    return *this;
}

rectangleType rectangleType::operator++(int){
    rectangleType temp = *this;
    length++;
    width++;

    return temp;
}

rectangleType& rectangleType::operator--(){
    if(length>1){--length;}
    if(width>1){--width;}
    return *this;
}

rectangleType rectangleType::operator--(int){
    rectangleType temp = *this;
    if(length>1){length--;}
    if(width>1){width--;}

    return temp;
}

rectangleType rectangleType::operator+(const rectangleType& rectangle) const{
    rectangleType temp;

    temp.length = length + rectangle.length;
    temp.width = width + rectangle.width;
    return temp;

}

rectangleType rectangleType::operator-(const rectangleType& rectangle) const{
    rectangleType temp;

    if (length - rectangle.length < 1 || width - rectangle.width < 1){
        cout << "Non-positive value would occur, aborting operation." << endl;
        return *this;
    }
    else{
        temp.length = length - rectangle.length;
        temp.width = width - rectangle.width;
        return temp;
    }
}

rectangleType rectangleType::operator*(const rectangleType& rectangle) const{
    rectangleType temp;

    temp.length = length * rectangle.length;
    temp.width = width * rectangle.width;
    return temp;

}

rectangleType rectangleType::operator/(const rectangleType& rectangle) const{
    rectangleType temp;

    if(rectangle.width == 0 || rectangle.length == 0){
        cout << "Division by 0, aborting operation" << endl;
        return *this;
    }
    temp.length = length / rectangle.length;
    temp.width = width / rectangle.width;
    return temp;

}

bool rectangleType::operator==(const rectangleType& rectangle) const{
    return area() == rectangle.area();
}

bool rectangleType::operator!=(const rectangleType& rectangle) const{
    return area() != rectangle.area();
}

bool rectangleType::operator>(const rectangleType& rectangle) const{
    return area() > rectangle.area();
}

bool rectangleType::operator<(const rectangleType& rectangle) const{
    return area() < rectangle.area();
}

bool rectangleType::operator>=(const rectangleType& rectangle) const{
    return area() >= rectangle.area();
}

bool rectangleType::operator<=(const rectangleType& rectangle) const{
    return area() <= rectangle.area();
}

ostream& operator<<(ostream& osObject, const rectangleType& rectangle){
    osObject << "length = " << rectangle.length << "; Width = " << rectangle.width;
    return osObject;
}

istream& operator>>(istream& isObject, rectangleType& rectangle){
    double inLength, inWidth;
    isObject >> inLength >> inWidth;
    if(inLength > 0 && inWidth > 0){
        rectangle.length = inLength;
        rectangle.width = inWidth;
    }
    else{
        cerr << "Invalid input. Please enter positive values." << endl;
    }
    return isObject;
}