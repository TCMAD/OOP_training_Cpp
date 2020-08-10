#include <iostream>
using namespace std;

class complexe {
    private:
    int x,y;
    public:
    complexe(int a=0, int b=0) { x=a; y=b; }
    void print(){
        cout << "(" << x << "," << y << ")" << endl;
    }
    friend complexe operator+(complexe C1, complexe C2){
        complexe C3;
        C3.x = C1.x + C2.x;
        C3.y = C1.y + C2.y;
        return C3;
    }

    friend complexe operator*(complexe C1, complexe C2){
        complexe C3;
        C3.x = C1.x * C2.x;
        C3.y = C1.y * C2.y;
        return C3;
    }
};

int main(){
    complexe c1(4,2), c2(6,3), c3(12,6);
    complexe c4 = c1 + c3;
    complexe c5 = c1 + c4;
    complexe c6 = c2 + c4 + c5;
    complexe c7 = c1 * c3;
    complexe c8 = c4 * c5;

    cout << "c1 = ";
    c1.print();
    cout << "c3 = ";
    c3.print();
    cout << "c4 = ";
    c4.print();
    cout << "c5 = ";
    c5.print();
    cout << "c6 = ";
    c6.print();
    cout << "c7 = ";
    c7.print();
    cout << "c8 = ";
    c8.print();
}