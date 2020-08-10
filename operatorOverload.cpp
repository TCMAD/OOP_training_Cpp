#include <iostream>
using namespace std;

class vecteur{
    private:
    int x,y;
    public:
    vecteur(int a, int b) : x(a), y(b) {}
    void print(){
        cout << "Coordonnees : (" << x << "," << y << ")" << endl; 
    }
    friend vecteur operator+ (vecteur V1, vecteur V2){
        vecteur V3(V1.x+V2.x,V1.y+V2.y);
        return V3;
    }
    
};

int main(){
    vecteur v1(5,2), v2(2,5), v3(5,5);
    vecteur v4 = v1+v2+v3;
    vecteur v5 = v4+v2;
    cout << "v1 ";
    v1.print();
    cout << "v2 ";
    v2.print();
    cout << "v3 ";
    v3.print();
    cout << "v4 ";
    v4.print();
    cout << "v5 ";
    v5.print();
}