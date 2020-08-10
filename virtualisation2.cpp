#include <iostream>
using namespace std;

class Shape {
     public:
        Shape() {}
        virtual double Area() const = 0;
        virtual double Perimeter() const = 0;
};

class Square : public Shape {
    private:
    double c;
    public:
    Square(double side): c(side) {}
    double Area() const {
        return c*c;
    }
    double Perimeter() const {
        return c*4;
    }
};

class Rectangle : public Shape {
    private:
    double width{0}, height{0};
    public:
    Rectangle(double w, double h): width(w), height(h) {}
    double Area() const override{
        return width*height;
    }
    double Perimeter() const override{
        return (width*height)*2;
    }
};

int main(){
    Rectangle A(5,7);
    cout << A.Area() << endl;
    Square B(5);
    cout << B.Area() << endl;
}