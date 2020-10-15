#include"laboratorio.h"
#include<fstream>

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

    cout<<left;
    cout<<setw(22)<<"Modelo";
    cout<<setw(15)<<"Procesador";
    cout<<setw(22)<<"Sistema operativo";
    cout<<setw(5)<<"Ram";
    cout<<endl;
    for (size_t i = 0; i < cont; i++){
        Computadora &c = arreglo[i];
        cout<<c;
        /*cout<<"Nombre: "<<c.getModelo()<<endl;
        cout<<"Procesador: "<<c.getProcesador()<<endl;
        cout<<"Sistema operativo: "<<c.getSistema()<<endl;
        cout<<"Memoria Ram: "<<c.getRam()<<endl;
        cout<<endl<<endl;*/

    }
    

}

void Laboratorio::respaldar_tabla(){
    ofstream archivo("Computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo<<left;
        archivo<<setw(22)<<"Modelo";
        archivo<<setw(15)<<"Procesador";
        archivo<<setw(22)<<"Sistema operativo";
        archivo<<setw(5)<<"Ram";
        archivo<<endl;
        for (size_t i = 0; i < cont; i++){
            Computadora &c = arreglo[i];
            archivo<<c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo("Computadoras.txt");
    if(archivo.is_open()){
        for (size_t i = 0; i < cont; i++){
            Computadora &c = arreglo[i];
            archivo<<c.getModelo()<<endl;
            archivo<<c.getProcesador()<<endl;
            archivo<<c.getSistema()<<endl;
            archivo<<c.getRam()<<endl;
        }
    }
    archivo.close();
}