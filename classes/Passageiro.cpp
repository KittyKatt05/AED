//
// Created by Z L on 28/11/2021.
//

#include "Passageiro.h"

using namespace std;

Passageiro::Passageiro(){}
Passageiro::Passageiro(string nome, Bagagem bagagem, Bilhete bilhete, bool checkinAuto){
    this->nome = nome;
    this->bagagem = bagagem;
    this->bilhete = bilhete;
    this->checkinAuto = checkinAuto;
}

string Passageiro::getNome(){
    return this->nome;
}

Bagagem Passageiro::getBagagem(){
    return this->bagagem;
}

Bilhete Passageiro::getBilhete(){
    return this->bilhete;
}

bool Passageiro::getCheckinAuto() {
    return checkinAuto;
}

void Passageiro::setNome(string nome){
    this->nome = nome;
}

void Passageiro::setBagagem(Bagagem bagagem){
    this->bagagem = bagagem;
}

void Passageiro::setBilhete(Bilhete bilhete1){
    this->bilhete = bilhete1;
}

void Passageiro::setCheckinAuto(bool checkinAuto) {
    this->checkinAuto = checkinAuto;
}

bool Passageiro::verificarCheckin(Passageiro p) {
    if(p.getCheckinAuto()){
        return true;
    }
    return false;
}