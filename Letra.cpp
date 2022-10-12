//
// Created by Andres VEGA on 11/10/2022.
//

#include "Letra.h"
#include <iostream>
using namespace std;

Letra::Letra(int num) : Tecla() {
    this->num = num;
    this->nombre = convertirAAscii(num);
}

Letra::Letra(char nombre) : Tecla() {
    this->nombre = nombre;
    this->num = convertirANumero(nombre);
}

Letra::~Letra() {

}

char Letra::convertirAAscii(int num) {
    char letra;
    if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122))
        letra = (char) num;
    else
        letra = '\0';
    return letra;
}

int Letra::convertirANumero(char letra) {
    return (int) letra;
}
