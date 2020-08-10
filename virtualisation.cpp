#include <iostream>

class Animal {
    public:
    virtual std::string Talk() const;
};

class Dog : public Animal {
    public:
    std::string Talk() const {
        return std::string("Wouf");
    }
};

int main(){
    Dog Albert;
    std::cout << Albert.Talk();
}