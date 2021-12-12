//
// Created by Z L on 28/11/2021.
//

#include "Passageiro.h"

using namespace std;

Passageiro::Passageiro(){}
Passageiro::Passageiro(string nome, Bagagem bagagem, TipoTicket tipoTicket, bool checkinAuto){
    this->nome = nome;
    this->bagagem = bagagem;
    this->tipoTicket = tipoTicket;
    this->checkinAuto = checkinAuto;
}

string Passageiro::getNome(){
    return this->nome;
}

Bagagem Passageiro::getBagagem(){
    return this->bagagem;
}

TipoTicket Passageiro::getTipoTicket(){
    return this->tipoTicket;
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

void Passageiro::setTipoTicket(TipoTicket tipoTicket){
    this->tipoTicket = tipoTicket;
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