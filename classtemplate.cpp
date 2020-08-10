#include <iostream>

using namespace std;

template<class point, class color> class pointcol 
{
    point X;
    point Y;
    color C;
    public:
    pointcol(point valx, point valy, color col) : X(valx), Y(valy), C(col) {};
    void affiche(){
        cout << "(" << X << "," << Y << ")" << endl;
        cout << "color : " << C << endl;
    }
};

int main(){
    pointcol<float,string>A(1.1,2.2,"red");
    cout << "Coordonnee de A : " ;
    A.affiche();
}

