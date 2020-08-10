#include <iostream>

using namespace std;

class BankAccount{
    private:
    string first_Name, last_Name;
    int Age;
    char Sexe;
    string accountNb;
    static int NbAccountRegister;
    double cashAccount;

    public:
    BankAccount(string FN, string LN, string ANB, double cash ) 
    : first_Name(FN), last_Name(LN), accountNb(ANB), cashAccount(cash){
        NbAccountRegister++;
    }
    ~BankAccount(){
        NbAccountRegister--;
    }
    void Name(){
        cout << first_Name << " " << last_Name << endl;
    }
    void firstName(string name){
        first_Name = name;
    }
    void lastName(string name){
        last_Name = name;
    }
    void Sex(char S){
        switch (S)
        {
        case 'm':
        case 'M':
            Sexe = S;
            break;
        
        case 'f':
        case 'F':
            Sexe = S;
            break;
        
        default:
            cout << "Erreur : Veuillez entrer la lettre correspondant au sexe du propriétaire du compte (M/F)" << endl;
            break;
        }
    }
    void age(int a){
        Age = a;
    }
    void cash(double c){
        cashAccount = c;
    }
    void info(){
        if (Sexe)
        {
            if(Sexe == 'm' || Sexe == 'M'){
                cout << "Mr ";
            }else {
                cout << "Mme ";
            }
        }
        Name();
        if(Age){
            cout << "Age : " << Age << endl;
        }
        cout << "Numero de compte : " << accountNb << endl;
        cout << "Montant : " << cashAccount << " $"<< endl;
    }
};

    int BankAccount::NbAccountRegister = 0;

int main(){
    BankAccount A("Vincent","Loiseau", "20157W", 200);
    A.age(22);
    A.info();
}