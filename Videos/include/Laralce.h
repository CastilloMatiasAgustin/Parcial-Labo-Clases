#ifndef LARALCE_H
#define LARALCE_H
#include <cstdlib>
#include <iostream>
using namespace std;

class Laralce
{
private:
    float depositoagua;
    bool Encendido;
    int cantHielosChicos;
    int cantHielosGrandes;
public:
    Laralce(bool);
    float getdepositoagua()
    {
        return depositoagua;
    }
    float getEncendido()
    {
        return Encendido;
    }
    int getcantHielosChicos(){return cantHielosChicos;}
    int getcantHielosGrandes(){return cantHielosGrandes;}
    void  setdepositoagua (float);
    void  setEncendido(bool e)
    {
        Encendido=e;
    }
    void llenar(float);
    int getHielo(int);
    void vaciar();
    void encender();
    void apagar();


};

#endif // LARALCE_H
