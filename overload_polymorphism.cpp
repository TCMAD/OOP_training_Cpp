#include <iostream>
using namespace std;

void hello(){
   cout << "Hello, World!" << endl; 
}

class Human {};
class Man {};
class Woman {};

void hello(Human human){
    cout << "Hello, Human!" << endl;
}

void hello(Man man){
    cout << "Hello, guy!" << endl;
}

void hello(Woman girl){
    cout << "Hello girl !" << endl;
}

int main(){
    hello();
    Human A;
    hello(A);
    Man B;
    hello(B);
    Woman C;
    hello(C);
}