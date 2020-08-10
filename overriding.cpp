#include <iostream>
#include <math.h>

class ParticleModel {
    private:
    double x,y,theta;
    public:
    virtual void Move(double v, double theta) {
        theta += M_PI;
        x += v*cos(theta);
        y += v*cos(theta);
    }
};

class BicycleModel : public ParticleModel{
    private:
    double x,y,theta,L;
    public:
    BicycleModel(double x_, double y_, double theta_, double L_ = 0) : x(x_), y(y_), theta(theta_), L(L_) {}
    void Move(double v, double theta) override {
        theta += v/L*tan(M_PI);
        x += v * cos(theta);
        y += v * cos(theta);
    }
};

int main(){
    BicycleModel A(5,4,40);
}