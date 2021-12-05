//
// Created by ZLAmo on 05/12/2021.
//

#include "Hora.h"

Hora::Hora() {
    this->hora = 0;
    this->minuto = 0;
}

Hora::Hora(int hora, int minuto) {
    this->hora = hora;
    this->minuto = minuto;
}

int Hora::getHora() {
    return this->hora;
}

int Hora::getMinuto() {
    return this->minuto;
}

void Hora::setHora(int hora) {
    this->hora = hora;
}

void Hora::setMinuto(int minuto) {
    this->minuto = minuto;
}

bool Hora::operator<(Hora hora1) {
    if(this->hora < hora1.hora){
        return true;
    }
    return this->minuto < hora1.minuto;
}

bool Hora::operator==(Hora hora1) {
    return (this->hora == hora1.hora and this->minuto == hora1.minuto);
}

bool Hora::operator<=(Hora hora1) {
    return (this->operator<(hora1) or this->operator==(hora1));
}

bool Hora::operator>(Hora hora1) {
    return not(this->operator<=(hora1));
}

bool Hora::operator>=(Hora hora1) {
    return (this->operator>(hora1) or this->operator==(hora1));
}

string Hora::toString() {
    string hora1;
    hora1.append(to_string(this->hora)).append(":").append(to_string(this->minuto));
    return hora1;
}