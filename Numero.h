//
// Created by Andres VEGA on 11/10/2022.
//

#ifndef LIST_TECLA_ASCII_NUMERO_H
#define LIST_TECLA_ASCII_NUMERO_H
#include "Tecla.h"
#include<iostream>
using namespace std;

class Numero:public Tecla {

public:
    Numero(int);
    Numero(char);
    ~Numero();

    char convertirAAscii(int);
    int convertirANumero(char);
};


#endif //LIST_TECLA_ASCII_NUMERO_H
