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

    private:
        double length;
        double width;
};

void rectangleType::setDimensions(double length, double width){
    if(length >= 0)
        this->length = length;
    else this->length = 0;

    if(width >= 0)
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
    if(length>0){--length;}
    if(width>0){--width;}
    return *this;
}

rectangleType rectangleType::operator--(int){
    rectangleType temp = *this;
    if(length>0){length--;}
    if(width>0){width--;}

    return temp;
}