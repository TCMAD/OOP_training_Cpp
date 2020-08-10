#include <iostream>

template<typename Type> Type pow(Type a) {return a*a;}

template<class Type> Type Sum(Type *tab, int nb_elem){
    Type total;
    for(auto i = 0; i < nb_elem; i++){
        total += tab[i];
    }
    return total;
}

int main(){
    std::cout << "/*Calcul d'un carre*/" << std::endl;
    std::cout << "Entrer une valeur : " << std::endl;
    int n;
    std::cin >> n;
    std::cout << "Carre de "<< n <<" = "<< pow<int>(n) << std::endl;
    int tab[3];
    std::cout << "/* Somme tableau */" << std::endl;
    std::cout << "Entrer 3 valeur : " << std::endl;
    std::cin >> tab[0];
    std::cin >> tab[1];
    std::cin >> tab[2];
    std::cout << Sum(tab,3) <<std::endl;
}