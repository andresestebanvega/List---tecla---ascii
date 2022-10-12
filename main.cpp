
#include<iostream>
#include "Tecla.h"
#include "Numero.h"
#include "Letra.h"
#include <list>
using namespace std;

int main() {
    //CARGA MANUAL

    Tecla t1(35);
    t1.mostrar();

    Tecla t2(36);
    t2.mostrar();

    Numero n1(52);
    n1.mostrar();

    Numero n2('5');
    n2.mostrar();

    Letra l1(65);
    l1.mostrar();

    Letra l2('B');
    l2.mostrar();
    cout<<"--------------------------------------------"<<endl;
    //CARGA AUTOMATICA - FORMA 1 - POR FOR
    list<Numero>Numeros;
    for (int i = 48; i < 58; ++i) {
        Numeros.push_back(Numero(i));
    }

    //CARAGA AUTOMATICA - FORMA 2 - DEFINIDO
    list<Numero>NumerosASCII={Numero(48),Numero(49),Numero(50),Numero(51),Numero(52),
                              Numero(53),Numero(54),Numero(55),Numero(56),Numero(57)};

    list<Letra>LetrasMayusculasASCII={Letra(65),Letra(66),Letra(67),Letra(68),Letra(69),
                                      Letra(70),Letra(71),Letra(72),Letra(73),Letra(74),
                                      Letra(75),Letra(76),Letra(77),Letra(78),Letra(79),
                                      Letra(80),Letra(81),Letra(82),Letra(83),Letra(84),
                                      Letra(85),Letra(86),Letra(87),Letra(88),Letra(89),
                                      Letra(90)};

    list<Letra>LetrasMinusculasASCII={Letra(97),Letra(98),Letra(99),Letra(100),Letra(101),
                                      Letra(102),Letra(103),Letra(104),Letra(105),Letra(106),
                                      Letra(107),Letra(108),Letra(109),Letra(110),Letra(111),
                                      Letra(112),Letra(113),Letra(114),Letra(115),Letra(116),
                                      Letra(117),Letra(118),Letra(119),Letra(120),Letra(121),
                                      Letra(122)};
    cout<<"La lista de numeros es: "<<endl;
    cout<<"--------------------------------------------"<<endl;
    //RECORRIDO DE LISTA - IMPRIMIR
    for (auto i = NumerosASCII.begin(); i != NumerosASCII.end() ; ++i) {
        i->mostrar();
    }
    cout<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"La lista de letras mayusculas es: "<<endl;
    cout<<"--------------------------------------------"<<endl;
    for (auto i = LetrasMayusculasASCII.begin(); i != LetrasMayusculasASCII.end() ; ++i) {
        i->mostrar();
    }
    cout<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<"La lista de letras minusculas es: "<<endl;
    cout<<"--------------------------------------------"<<endl;
    for (auto i = LetrasMinusculasASCII.begin(); i != LetrasMinusculasASCII.end() ; ++i) {
        i->mostrar();
    }
    cout<<endl;

    cout<<"La lista de numeros ejemplo 2 carga por FOR es: "<<endl;
    cout<<"--------------------------------------------"<<endl;

    for (auto i = Numeros.begin(); i != Numeros.end() ; ++i) {
        i->mostrar();
    }
    cout<<endl;


    return 0;

}
