//
// Created by Andres VEGA on 11/10/2022.
//

#ifndef LIST_TECLA_ASCII_TECLA_H
#define LIST_TECLA_ASCII_TECLA_H
#include<iostream>
using namespace std;

class Tecla {
protected:
    int num;
    char nombre;
public:

    Tecla();
    virtual ~Tecla();
    void mostrar();
    void setNum(int);
    void setNombre(char);
    int getNum();
    char getNombre();

};
inline void Tecla::setNum(int num) {
    this->num=num;
}
inline void Tecla::setNombre(char nombre) {
    this->nombre=nombre;
}
inline int Tecla::getNum() {
    return num;
}
inline char Tecla::getNombre() {
    return nombre;
}


#endif //LIST_TECLA_ASCII_TECLA_H
