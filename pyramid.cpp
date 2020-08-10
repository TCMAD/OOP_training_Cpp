#include <iostream>
#include <cassert>

class Pyramid
{
private:
    int length_;
    int width_;
    int heigth_;

public:
    Pyramid(int l, int w, int h) : length_(l), width_(w), heigth_(h) {}
    int length() const { return length_; }
    int width() const { return width_; }
    int heigth() const { return heigth_; }
    void length(int l)
    {
        if (l > 0)
        {
            length_ = l;
        }
        else 
        {
            std::cout << "Error : you enter a negative number" << std::endl;
        }
    }
    void width(int w)
    {
        if (w > 0)
        {
            width_ = w;
        }
        else 
        {
            std::cout << "Error : you enter a negative number" << std::endl;
        }
    }
    void heigth(int h)
    {
        if (h > 0)
        {
            heigth_ = h;
        }
        else 
        {
            std::cout << "Error : you enter a negative number" << std::endl;
        }
    }
    float volume(){
        return length_*width_*heigth_/3; 
    }
    float surface(){
        float surface_base = length_*width_;
        float perimeter = (length_+width_)*2;
        return surface_base + perimeter/2;
    }
};

int main()
{
    Pyramid pyramid(1, 2, 3);
    assert(pyramid.length() == 1);
    assert(pyramid.width() == 2);
    assert(pyramid.heigth() == 3);
    assert(pyramid.volume() == 2);
}