#include <iostream>
#include <math.h>

using namespace std;

class LineSegment {
    public:
    int length;
    const float pi{3.14159};
};

class Circle {
    public:
    LineSegment radius;
    Circle(int l) {
        radius.length = l;
    }
    float area(){
        return pow(radius.length,2)*radius.pi;
    }
};

int main(){
    Circle c(5);
    cout << c.area() << endl;
}