class rectangleType{
    public:
        void setDimensions(double length, double width);
        double getLength() const;
        double getWidth() const;
        double area() const;
        double perimeter() const;
        void print() const;

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
    else length = 0;

    if(width >= 0)
        this->width = width;
    else width = 0;
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