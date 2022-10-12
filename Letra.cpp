//
// Created by Andres VEGA on 11/10/2022.
//

#include "Letra.h"
#include <iostream>
using namespace std;

Letra::Letra(int num) : Tecla(num) {
    this->Tecla::setNum(num);
    this->Tecla::setNombre(convertirAAscii(num));
}

Letra::Letra(string nombre) : Tecla(nombre) {
    this->Tecla::setNombre(nombre);
    this->Tecla::setNum(convertirANumero(nombre));
}

Letra::~Letra() {

}

string Letra::convertirAAscii(int num) {
    string nombre;
    switch (num) {
        case 65:
            nombre="A";
            break;
        case 66:
            nombre="B";
            break;
        case 67:
            nombre="C";
            break;
        case 68:
            nombre="D";
            break;
        case 69:
            nombre="E";
            break;
        case 70:
            nombre="F";
            break;
        case 71:
            nombre="G";
            break;
        case 72:
            nombre="H";
            break;
        case 73:
            nombre="I";
            break;
        case 74:
            nombre="J";
            break;
        case 75:
            nombre="K";
            break;
        case 76:
            nombre="L";
            break;
        case 77:
            nombre="M";
            break;
        case 78:
            nombre="N";
            break;
        case 79:
            nombre="O";
            break;
        case 80:
            nombre="P";
            break;
        case 81:
            nombre="Q";
            break;
        case 82:
            nombre="R";
            break;
        case 83:
            nombre="S";
            break;
        case 84:
            nombre="T";
            break;
        case 85:
            nombre="U";
            break;
        case 86:
            nombre="V";
            break;
        case 87:
            nombre="W";
            break;
        case 88:
            nombre="X";
            break;
        case 89:
            nombre="Y";
            break;
        case 90:
            nombre="Z";
            break;
        case 97:
            nombre="a";
            break;
        case 98:
            nombre="b";
            break;
        case 99:
            nombre="c";
            break;
        case 100:
            nombre="d";
            break;
        case 101:
            nombre="e";
            break;
        case 102:
            nombre="f";
            break;
        case 103:
            nombre="g";
            break;
        case 104:
            nombre="h";
            break;
        case 105:
            nombre="i";
            break;
        case 106:
            nombre="j";
            break;
        case 107:
            nombre="k";
            break;
        case 108:
            nombre="l";
            break;
        case 109:
            nombre="m";
            break;
        case 110:
            nombre="n";
            break;
        case 111:
            nombre="o";
            break;
        case 112:
            nombre="p";
            break;
        case 113:
            nombre="q";
            break;
        case 114:
            nombre="r";
            break;
        case 115:
            nombre="s";
            break;
        case 116:
            nombre="t";
            break;
        case 117:
            nombre="u";
            break;
        case 118:
            nombre="v";
            break;
        case 119:
            nombre="w";
            break;
        case 120:
            nombre="x";
            break;
        case 121:
            nombre="y";
            break;
        case 122:
            nombre="z";
            break;
    }
    return nombre;
}

int Letra::convertirANumero(string nombre) {
    int num;
    if(nombre=="A"){
        num=65;
    }else if(nombre=="B"){
        num=66;
    }else if(nombre=="C"){
        num=67;
    }else if(nombre=="D"){
        num=68;
    }else if(nombre=="E"){
        num=69;
    }else if(nombre=="F"){
        num=70;
    }else if(nombre=="G"){
        num=71;
    }else if(nombre=="H"){
        num=72;
    }else if(nombre=="I"){
        num=73;
    }else if(nombre=="J"){
        num=74;
    }else if(nombre=="K"){
        num=75;
    }else if(nombre=="L"){
        num=76;
    }else if(nombre=="M"){
        num=77;
    }else if(nombre=="N"){
        num=78;
    }else if(nombre=="O"){
        num=79;
    }else if(nombre=="P"){
        num=80;
    }else if(nombre=="Q"){
        num=81;
    }else if(nombre=="R"){
        num=82;
    }else if(nombre=="S"){
        num=83;
    }else if(nombre=="T"){
        num=84;
    }else if(nombre=="U"){
        num=85;
    }else if(nombre=="V"){
        num=86;
    }else if(nombre=="W"){
        num=87;
    }else if(nombre=="X"){
        num=88;
    }else if(nombre=="Y"){
        num=89;
    }else if(nombre=="Z"){
        num=90;
    }else if(nombre=="a"){
        num=97;
    }else if(nombre=="b"){
        num=98;
    }else if(nombre=="c"){
        num=99;
    }else if(nombre=="d"){
        num=100;
    }else if(nombre=="e"){
        num=101;
    }else if(nombre=="f"){
        num=102;
    }else if(nombre=="g"){
        num=103;
    }else if(nombre=="h"){
        num=104;
    }else if(nombre=="i"){
        num=105;
    }else if(nombre=="j"){
        num=106;
    }else if(nombre=="k"){
        num=107;
    }else if (nombre=="l"){
        num=108;
    }else if(nombre=="m"){
        num=109;
    }else if(nombre=="n"){
        num=110;
    }else if(nombre=="o"){
        num=111;
    }else if(nombre=="p"){
        num=112;
    }else if(nombre=="q"){
        num=113;
    }else if(nombre=="r"){
        num=114;
    }else if(nombre=="s"){
        num=115;
    }else if(nombre=="t"){
        num=116;
    }else if(nombre=="u"){
        num=117;
    }else if(nombre=="v"){
        num=118;
    }else if(nombre=="w"){
        num=119;
    }else if(nombre=="x"){
        num=120;
    }else if(nombre=="y"){
        num=121;
    }else if(nombre=="z"){
        num=122;
    }
    return num;
}
