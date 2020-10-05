#include"laboratorio.h"

Laboratorio::Laboratorio()
{
  cont=0;
}

void Laboratorio::agregarComputadora(const Computadora &c)
{
    if(cont<5)
    {
        arreglo[cont]=c;
        cont++;
    }
    else{
        cout<<"Arreglo lleno"<<endl;
    }
}

void Laboratorio::mostrar(){

    for (size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout<<"Nombre: "<<c.getModelo();
        cout<<"Procesador: "<<c.getProcesador();
        cout<<"Sistema operativo: "<<c.getSistema();
        cout<<"Memoria Ram: "<<c.getRam();
        cout<<endl<<endl;

    }
    

}