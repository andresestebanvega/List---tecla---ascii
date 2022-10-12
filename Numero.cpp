//
// Created by Andres VEGA on 11/10/2022.
//

#include "Numero.h"
#include<iostream>
using namespace std;

Numero::Numero(int num) : Tecla() {
    //this->Tecla::setNum(num);
    this->num = num;
    //this->Tecla::setNombre(convertirAAscii(num));
    this->nombre = convertirAAscii(num);
}

Numero::Numero(char nombre) : Tecla() {
    //this->Tecla::setNombre(nombre);
    this->nombre = nombre;
    //this->Tecla::setNum(convertirANumero(nombre));
    this->num = convertirANumero(nombre);
}

Numero::~Numero() {
}

char Numero::convertirAAscii(int num) {
    char letra;
    if (num >= 48 && num <= 57)
        letra = (char) num;
    else
        letra = '\0';
    return letra;
}

int Numero::convertirANumero(char nombre) {
    return (int) nombre;
}
