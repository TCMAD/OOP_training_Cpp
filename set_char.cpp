/*
Réaliser  une  classe  nommée set_char  permettant  de  manipuler  des  ensembles  de caractères.
On devra pouvoir réaliser sur un tel ensemble les opérations classiques suivantes  :  
lui  ajouter  un  nouvel  élément, 
connaître  son  «  cardinal  »  (nombre d’éléments),
savoir si un caractère donné lui appartient.
Ici, on n’effectuera aucune allocation dynamique d’emplacements mémoire.
Il faudra donc prévoir, en membre donnée, un tableau de taille fixe.
Écrire, en outre, un programme (main) utilisant la classe set_char 
pour déterminer le nombre de caractères différents contenus dans un mot lu en donnée.
*/
#include <iostream>
#include <algorithm>    // std::count
using namespace std;

class set_char
{
public:
    string characters;
    set_char(string s) : characters(s) {}
    void set(string s)
    {
        characters = s;
    }
    void add(string s)
    {
        characters += s;
    }
    int nbChar(){
        return characters.length(); 
    }
    void search(char c){
        int ch = count(characters.begin(),characters.end(),c);
        if(ch == 0){
            cout << "No character found on the string" << endl;
        }else{
            cout << "Your character " << c << " appear " << ch << " time(s)" << endl;
        }
    }
};

int main()
{
    cout << "////// Set Char program //////" << endl;
    string input;
    cout << "Enter characters : ";
    cin >> input;
    set_char A(input);
    char choice;
    while (choice != 'q')
    {
        cout << "Choose a function : " << endl;
        cout << "1.Define string" << endl;
        cout << "2.Add characters" << endl;
        cout << "3.Get the number of characters" << endl;
        cout << "4.Find the number of time your character appear" << endl;
        cout << "other : exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case '1':
            cout << "Enter new characters : " << endl;
            cin >> input;
            A.set(input);
            cout << A.characters << endl;
            break;
        case '2':
            cout << "Enter characters to add : " << endl;
            cin >> input;
            A.add(input);
            cout << A.characters << endl;
            break;
        case '3':
            cout << "Number of characters : " << A.nbChar() << endl;
            break;
        case '4':
            char c;
            cout << "Enter one character : ";
            cin >> c;
            A.search(c);
            break;
        default:
            choice = 'q';
            break;
        }
        cout << "######################" << endl;
    }
}