#pragma once
// Déclaration de la classe point
class point{
    private:
    float x{0},y{0};
    static int nb_points;
    public :
    int GetNbPoints();
    point(float X, float Y) : x(X), y(Y){ nb_points++;}
    ~point(){
        nb_points--;
    };
    void move(float X, float Y);
    //void print();
    float abscisse();
    float ordonnee();
    void homothetie(float k);
    void rotation(float angle);
    float rho();
    float theta();
};