//
// Created by Andres VEGA on 11/10/2022.
//

#ifndef LIST_TECLA_ASCII_TECLA_H
    #define LIST_TECLA_ASCII_TECLA_H
    #include<iostream>
    using namespace std;

    class Tecla
    {
        protected:
            int num;
            char nombre;

        public:
            Tecla();
            Tecla(int);
            Tecla (char);
            virtual ~Tecla();
            void mostrar();

};

#endif //LIST_TECLA_ASCII_TECLA_H
