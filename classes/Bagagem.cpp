//
// Created by catar on 28/11/2021.
//

#include "Bagagem.h"
using namespace std;

Bagagem::Bagagem() {
    peso = 0;
    passageiro = 'null';
}

Bagagem::Bagagem(unsigned peso, Passageiro passageiro1) {
    this->peso = peso;
    this->passageiro = passageiro1;
}

int Bagagem::getPeso() {
    return this->peso;
}

Passageiro Bagagem::getPassageiro() {
    return this->passageiro;
}

void Bagagem::setPeso(unsigned int peso) {
    this->peso = peso;
}

void Bagagem::setPassageiro(Passageiro passageiro) {
    this->passageiro = passageiro;
}

