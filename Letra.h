//
// Created by Andres VEGA on 11/10/2022.
//

#ifndef TEMPLATECPP_LETRA_H
#define TEMPLATECPP_LETRA_H
#include "Tecla.h"
#include<iostream>
using namespace std;

class Letra:public Tecla {
public:
    Letra(int);
    Letra(string);
    ~Letra();

    string convertirAAscii(int);
    int convertirANumero(string);
};



#endif //TEMPLATECPP_LETRA_H
