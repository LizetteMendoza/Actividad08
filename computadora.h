#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
using namespace std; 


class Computadora
{
private:
    string modelo;
    string procesador;
    string sistema;
    int ram;

public:
   Computadora();
   Computadora(const string&modelo, const string&procesador, const string&sistema, int ram);
   void setModelo(const string&v);
   string getModelo();
   void setProcesador(const string&v);
   string getProcesador();
   void setSistema(const string&v);
   string getSistema();
   void setRam(int v);
   int getRam();
   
};



#endif

