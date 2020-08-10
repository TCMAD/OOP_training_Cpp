#include <iostream>
/*
Soient v1 et v2, deux vecteurs définis par leurs coordonnées (x, y) et
(x’, y’) extrémités, dans le plan euclidien orienté usuel.
Écrivez un programme, construit autour d’une classe vecteur, dont les
fonctions membres (méthodes) afficheront les 2 vecteurs v1 et v2, puis
calculeront les déterminants det(v1, v2) et det (v2, v1).
Les coordonnées extrémités des 2 vecteurs v1 et v2 seront imposées.
Rappel mathématique : det(v1, v2) = xy’ – yx’
*/
class vecteur{
    private:
    float X{0},Y{0};
    
    public:
    vecteur(float x,float y): X(x), Y(y){}
    void print(){
        std::cout << "V (x,y) = (" << X << "," << Y << ")" << std::endl; 
    }
    float det(vecteur);
};

float vecteur::det(vecteur v){
        return X*v.Y-v.X*Y;
    }

int main(){
    vecteur v1(2,3), v2(2.5,7);
    std::cout << "v1" << std::endl;
    v1.print();
    std::cout << "v2" << std::endl;
    v2.print();

    std::cout << "determinant(v1,v2) = xy'-x'y" << std::endl;
    std::cout << "det(v1,v2) = " << v1.det(v2) << std::endl;
    std::cout << "det(v2,v1) = " << v2.det(v1) << std::endl;
}