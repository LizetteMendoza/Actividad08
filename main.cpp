#include<iostream>
#include"laboratorio.h"

using namespace std; 


int main(){

    Computadora c1= Computadora("Lenovo 3 R7","AMD Ryzen 7 ","Windows 10 pro",16);
    Computadora c3= Computadora("Dell Gaming G5", "AMD Ryzen 5","Windows 10",8);

    Computadora c2; //constructor base
    Computadora c4;

    c2.setModelo("ASUS ROG Strix G");
    c2.setProcesador("i Core i5-9");
    c2.setSistema("Windows 10 Pro");
    c2.setRam(12);

    c4.setModelo("Lenovo ThinkPad L15");
    c4.setProcesador("i Core i5-10");
    c4.setSistema("Windows 10 Pro");
    c4.setRam(8);

    Laboratorio lab;
    lab.agregarComputadora(c1);
    //lab.agregarComputadora(c2);
    //lab.agregarComputadora(c3);
    lab.agregarComputadora(c4);


    lab << c2 << c3;

    //cout<<c4;

    Computadora c5;
    cin>>c5;
    lab << c5;
    //lab.agregarComputadora(c5);

    lab.respaldar();

    lab.mostrar();
     
    return 0;
}