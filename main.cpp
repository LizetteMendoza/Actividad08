#include<iostream>
#include"laboratorio.h"

using namespace std; 


int main(){

    Computadora c1= Computadora("Lenovo 3 R7","AMD Ryzen 7 ","Windows 10 pro",16);

    Computadora c2; //constructor base

    Laboratorio lab;
    lab.agregarComputadora(c1);
    lab.agregarComputadora(c2);


    
    c2.setModelo( "ASUS ROG Strix G");
    c2.setProcesador("Core i5-9300H");
    c2.setSistema("Windows 10  Pro");
    c2.setRam(12);

    /*cout<<c2.getModelo()<<endl;
    cout<<c2.getProcesador()<<endl;
    cout<<c2.getSistema()<<endl;
    cout<<c2.getRam();

    cout<<endl<<endl;
    cout<<c1.getModelo()<<endl;
    cout<<c1.getProcesador()<<endl;
    cout<<c1.getSistema()<<endl;
    cout<<c1.getRam();*/
     
    return 0;
}