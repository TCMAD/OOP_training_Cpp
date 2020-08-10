/*
Écrivez un programme qui calcule l’aire, le volume, le diamètre de la
sphère inscrite et circonscrite d’un dodécaèdre.
Vous utiliserez une classe, qui contiendra les fonctions membres : aire,
volume, diamètre sphère inscrite, diamètre sphère circonscrite et le coefficient
c comme une donnée membre statique.
Vous prévoirez un constructeur et destructeur pour la classe.
*/

#include <iostream>
#include <math.h>  
using namespace std;

class dodec {
    private:
    double a; // longueur de l'arête
    double c = sqrt(5);
    
    public:
    dodec(double longueur) : a(longueur) {}
    ~dodec(){}
    double Aire(){
        // Calcul de l'aire
        double A;
        A = 3*sqrt(25+10*c)*a*a;
        return A;
    }
    double Volume(){
        // Calcul du volume
        double V;
        V = (1./4.)*(15+7*c)*(a*a*a); // !!
        return V;
    }
    double d(){
        // Calcul du Diamètre sphère inscrite
        double d;
        d = sqrt(2.5+1.1*c)*a; // !!
        return d;
    }
    double D(){
        // Calcul du Diamètre sphère circonscrite
        double D;
        D = (1+c)/2*sqrt(3)*a;
        return D;
    }

};

int main(){
    dodec S(5);
    cout << "Test" << endl;
    cout << "Aire : " << S.Aire() << endl;
    cout << "Volume : " << S.Volume() << endl;
    cout << "Diametre sphere inscrite : " << S.d() << endl;
    cout << "Diametre sphere circonscrite : " << S.D() << endl;
    return 0;
}