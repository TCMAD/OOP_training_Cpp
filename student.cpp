#include <iostream>

using namespace std;

class Student {
    private:
    string Name;
    float Grade;
    float GPA; // Grade Point Average
    
    public:
    Student(string n,float g, float gpa) : Name(n), Grade(g), GPA(gpa) {}
    void name(string n){
        Name = n;
    }
    void grade(float g){
        if(g < 12 && g > 0){
            Grade = g;
        }
        else{
            cout << "Error : You enter a grade who's not between 0 and 12." << endl;
        }
    }
    void gpa(float gpa){
        if(gpa < 12 && gpa > 0){
            GPA = gpa;
        }
        else{
            cout << "Error : You enter a GPA who's not between 0 and 4.0" << endl;
        }
    }
};

int main(){

}