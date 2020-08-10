#include <iostream>
#include "point_dec.h"
#include <cmath>

const float pi = 3.141592653 ; // valeur de pi
float angle (float, float) ; // fonction de service (non membre)

//Définition de la classe point
int point::nb_points = 0;

int point::GetNbPoints(){return nb_points;}

void point::move(float X, float Y)
{
    x = x + X;
    y = y + Y;
}

/*
void point::print(){
    std::cout << "(" << x << "," << y << ")" << std::endl;
}
*/

float point::abscisse()
{
    return x;
}

float point::ordonnee()
{
    return y;
}

void point::homothetie(float k)
{
    x *= k;
    y *= k;
}

void point::rotation(float th)
{
    float r = std::sqrt(x * x + y * y);
    float t = angle(x,y);
    t += th;
    x = r*std::cos(t);
    y = r*std::sin(t);
}

float point::rho()
{
    return std::sqrt(x * x + y * y);
}

float point::theta()
{
    return angle(x,y);
}

float angle(float x, float y)
{
    float a = x ? atan(y / x) : 0;
    if (y < 0)
        if (x >= 0)
            return a + pi;
        else
            return a - pi;
    return a;
}