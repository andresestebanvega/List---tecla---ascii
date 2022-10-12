//
// Created by Andres VEGA on 11/10/2022.
//

#ifndef LIST_TECLA_ASCII_TECLA_H
#define LIST_TECLA_ASCII_TECLA_H
#include<iostream>
using namespace std;

class Tecla {
private:
    int num;
    string nombre;
public:

    Tecla(int);
    Tecla(string);
    ~Tecla();
    void mostrar();
    void setNum(int);
    void setNombre(string);
    int getNum();
    string getNombre();

};
inline void Tecla::setNum(int num) {
    this->num=num;
}
inline void Tecla::setNombre(string nombre) {
    this->nombre=nombre;
}
inline int Tecla::getNum() {
    return num;
}
inline string Tecla::getNombre() {
    return nombre;
}


#endif //LIST_TECLA_ASCII_TECLA_H
