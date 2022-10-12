//
// Created by Andres VEGA on 11/10/2022.
//

#include "Numero.h"
#include<iostream>
using namespace std;

Numero::Numero(int num):Tecla(num) {
    this->Tecla::setNum(num);
    this->Tecla::setNombre(convertirAAscii(num));
}

Numero::Numero(string nombre):Tecla(nombre) {
    this->Tecla::setNombre(nombre);
    this->Tecla::setNum(convertirANumero(nombre));
}

Numero::~Numero() {
}

string Numero::convertirAAscii(int num) {
    string nombre;

    switch (num) {
        case 48:
            nombre="0";
            break;
        case 49:
            nombre="1";
            break;
        case 50:
            nombre="2";
            break;
        case 51:
            nombre="3";
            break;
        case 52:
            nombre="4";
            break;
        case 53:
            nombre="5";
            break;
        case 54:
            nombre="6";
            break;
        case 55:
            nombre="7";
            break;
        case 56:
            nombre="8";
            break;
        case 57:
            nombre="9";
            break;
    }
    return nombre;
}

int Numero::convertirANumero(string nombre) {
    int num;

    if(nombre=="0"){
        num=48;
    }else if(nombre=="1"){
        num=49;
    }else if(nombre=="2"){
        num=50;
    }else if(nombre=="3"){
        num=51;
    }else if(nombre=="4"){
        num=52;
    }else if(nombre=="5"){
        num=53;
    }else if(nombre=="6"){
        num=54;
    }else if(nombre=="7"){
        num=55;
    }else if(nombre=="8"){
        num=56;
    }else if(nombre=="9"){
        num=57;
    }
    return num;
}
