#include<iostream>
#include"laboratorio.h"

using namespace std; 


int main(){

    Computadora c1= Computadora("Lenovo 3 R7","AMD Ryzen 7 ","Windows 10 pro",16);
    Computadora c3= Computadora("Dell Gaming G5", "AMD Ryzen 5","Windows 10",8);

    Computadora c2; //constructor base
    Computadora c4;

    c2.setModelo( "ASUS ROG Strix G");
    c2.setProcesador("Core i5-9300H");
    c2.setSistema("Windows 10  Pro");
    c2.setRam(12);

    c4.setModelo( "Lenovo ThinkPad L15");
    c4.setProcesador("Intel Core i5-10210U");
    c4.setSistema("Windows 10 Pro");
    c4.setRam(8);

    Laboratorio lab;
    lab.agregarComputadora(c1);
    lab.agregarComputadora(c2);
    lab.agregarComputadora(c3);
    lab.agregarComputadora(c4);


    lab.mostrar();
     
    return 0;
}