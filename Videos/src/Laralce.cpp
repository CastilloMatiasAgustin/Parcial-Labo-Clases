#include "Laralce.h"

Laralce::Laralce(bool s)
{
    if(s==true)
    {
        Encendido=s;
        cantHielosChicos=0;
        cantHielosGrandes=0;
        depositoagua=0;
    }
    else
    {
        Encendido=false;
        depositoagua=0;
    }
}

void Laralce::llenar(float agua)
{
    depositoagua=depositoagua+agua;
    if(depositoagua>2)
    {
        depositoagua=2;
    }
}

int Laralce::getHielo(int cubito)
{
    if(Encendido==true)
    {
        if (cubito==1)
        {
            if (depositoagua>=0.015)
            {
                depositoagua-=0.015;
                cantHielosChicos++;
                return 15;
            }

        }
        if(cubito==2)
        {
            if(depositoagua>=0.025)
            {
                depositoagua-=0.025;
                cantHielosGrandes++;
                return 25;
            }
        }
        else
        {
            return 0;
        }
    }
}

void Laralce::vaciar()
{
    depositoagua=0;
}

void Laralce::encender()
{
    Encendido=true;
    cantHielosChicos=0;
    cantHielosGrandes=0;
}


void Laralce::apagar()
{
    Encendido=false;
    cout << "La cantidad de hielos chicos es de: "<<cantHielosChicos;
    cout<<endl;
    cout<< "La cantidad de hielos grandes es de: "<<cantHielosGrandes;
}

