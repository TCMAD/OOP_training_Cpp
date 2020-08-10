#include <iostream>

/* [Initialization list syntax]
 * Initialization lists are used for a number of reasons: 
 *   (1) First, the compiler can optimize initialization faster than if the members were initialized from within the constructor, 
 *       the code directly assigns to the class attributes. 
 *   (2) The second reason is a bit of a technical paradox. If you have a constant class attribute, 
 *       you can only initialize it using an initialization list. 
 *       Otherwise, you would violate the const keyword simply by initializing the member in the constructor! 
 *   (3) The third reason is that attributes defined as references must use initialization lists.
 */

class Person {
    public:
    Person(std::string n) : name(n){}; // Constructeur (possède le même nom que l'objet)
    void print(){
        std::cout << "Nom : " << name << std::endl;
    }
    private:
    std::string name;
};



int main(){
    Person A("Thomas");
    A.print();
}