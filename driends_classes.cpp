#include <iostream>

using namespace std;

class Rectangle {
    private:
    int width_, height_;
    Rectangle(int width, int heigth) : width_(width), height_(heigth){}
    public:
    int Area(){
        return width_*height_;
    }
};

class Square {
    friend Rectangle;
    private:
    int side_;
    Square(int side) : side_(side){}
};

int main (){
    
}