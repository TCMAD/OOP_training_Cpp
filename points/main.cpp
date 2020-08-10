#include <iostream>
#include "point_dec.h"
#include "point_def.cpp"

int main(){
    point A(5,7);
    std::cout << "position depart : ";
    //A.print();
    std::cout << "(" << A.abscisse() << "," << A.ordonnee() << ")" << std::endl;
    A.move(2,2);
    std::cout << "position arrive : ";
    //A.print();
    std::cout << "(" << A.abscisse() << "," << A.ordonnee() << ")" << std::endl;
    std::cout << "nombre de points : " << A.GetNbPoints() << std::endl;
}