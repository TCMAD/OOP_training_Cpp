#include <iostream>
using namespace std;

class Animal{
    public:
    string color, name;
    int age;
    //virtual void MakeSound();
};

class Pet{
    public:
    string ID_necklace;
    string name_owner;
};

class Snake : public Animal{
    public:
    int length;
    Snake(string n, string c, int a, int l){
        name = n;
        color = c;
        age = a;
        length = l;
    } 
    void MakeSound(){
        cout << "SSSSS" << endl;
    }
};

class Cat : public Animal{
    public:
    int heigth;
    Cat(string n, string c, int a, int h){
        name = n;
        color = c;
        age = a;
        heigth = h;
    }
    void MakeSound(){
        cout << "Miaow" << endl;
    }
};

class Dog : public Animal, public Pet {

};


int main(){
    Snake flipper("flipper","red",5,40);
    flipper.MakeSound();
    Cat Kitty("Kitty","White",8,15);
    Kitty.MakeSound();
    Dog dog;
    dog.name = "Marty";
    dog.name_owner = "Mcfly";
    cout << dog.name_owner << endl;
}