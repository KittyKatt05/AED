//
// Created by ZLAmo on 30/11/2021.
//

#include "Data.h"

int max (int a, int b){
    if (a>b) return(a) ; else return (b);
}

int min (int a, int b){
    if (a>b) return(b); else return (a);
}

Data::Data() {
    this->dia = 0;
    this->mes = 0;
    this->ano = 0;
}

Data::Data(int dia, int mes, int ano) {
    this->setDay(dia, mes);
    this->setMonth(mes);
    this->setYear(ano);
}

string Data::toString() const {
    string data1;
    data1.append(to_string(this->dia)).append("/").append(to_string(this->mes)).append("/").append(to_string(this->ano));
    return data1;
}

int Data::getDay() const {
    return this->dia;
}

int Data::getMonth() const {
    return this->mes;
}

int Data::getYear() const {
    return this->ano;
}

void Data::setMonth(int mes) {
    this->mes = min(mes, 12);
}

void Data::setYear(int ano) {
    this->ano = max(1, ano);
}

void Data::setDay(int dia, int mes) {
    static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    this->dia = max(1, dia);
    this->dia = min(dia, length[mes]);
}

bool Data::operator<(Data data1) const {
    if (this->ano >= data1.ano) { return false; }
    else if (this->mes >= data1.mes) { return false;}
    else if (this->dia >= data1.dia) { return false; }
    return true;
}

bool Data::operator==(Data data1) const {
    return (this->dia == data1.dia and
            this->mes == data1.mes and
            this->ano == data1.ano);
}

bool Data::operator<=(Data data1) const {
    return this->operator==(data1) or this->operator<(data1);
}

bool Data::operator>(Data data1) const {
    return not(this->operator<=(data1));
}

bool Data::operator>=(Data data1) const {
    return this->operator>(data1) or this->operator==(data1);
}