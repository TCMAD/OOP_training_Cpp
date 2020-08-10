#include <iostream>

using namespace std;

class Vehicule{
    protected:
    int wheels_{4};
    string color;
    public:
    string carburant_{"Essence"};
    void Print() const {
        cout << "This vehicule have " << wheels_ << " wheels and use " << carburant_ << endl;
    }
    private:
        
};

class Car : public Vehicule{
    public:
    int portes = 4;
};

class Bicycle : public Vehicule{
    public:
    Bicycle(){wheels_ = 2;}
};

int main(){
    Car peugeot;
    peugeot.Print();
    peugeot.carburant_ = "Electricity";
    peugeot.Print();

    Bicycle velo;
    velo.carburant_ = "Muscular energy";
    velo.Print();
}