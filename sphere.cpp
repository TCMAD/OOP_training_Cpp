#include <iostream>
#include <math.h>

class Sphere {
    private:
    float radius_;
    public:
    Sphere(float r) : radius_(r){}
    float radius(){return radius_;}
    float volume(){
        return (4./3.)*M_PI*pow(radius_,3.0);
    }
    void radius(float r){radius_ = r;}

};

int main(){
    Sphere sphere(9);
    std::cout << "Sphere de rayon : " << sphere.radius() << " cm" << std::endl;
    std::cout << " Volume : " << sphere.volume() << " cm3" << std::endl;
    sphere.radius(12);
    std::cout << "Sphere de rayon : " << sphere.radius() << " cm" << std::endl;
    std::cout << " Volume : " << sphere.volume() << " cm3" << std::endl;
}