//
// Created by Z L on 28/11/2021.
//

#include "Passageiro.h"

using namespace std;

Passageiro::Passageiro(){}
Passageiro::Passageiro(string nome, Bagagem bagagem, TipoTicket tipoTicket){
    this->nome = nome;
    this->bagagem = bagagem;
    this->tipoTicket = tipoTicket;
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

void Passageiro::setNome(string nome){
    this->nome = nome;
}

void Passageiro::setBagagem(Bagagem bagagem){
    this->bagagem = bagagem;
}

void Passageiro::setTipoTicket(TipoTicket tipoTicket){
    this->tipoTicket = tipoTicket;
}