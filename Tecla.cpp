//
// Created by Andres VEGA on 11/10/2022.
//

#include "Tecla.h"
#include<iostream>
using namespace std;


Tecla::Tecla() {}

Tecla::Tecla(int num) : Tecla() {
    this->num = num;
    this->nombre = char (num);
}

Tecla::Tecla(char nombre) {
    this->nombre = nombre;
    this->num = int (nombre);
}


Tecla::~Tecla() {}

void Tecla::mostrar() {
    cout<<"EL Numero es: "<<num<<endl;
    cout<<"El valor ASCII es: "<<nombre<<endl;
}
