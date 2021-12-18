//
// Created by catar on 15/12/2021.
//

#include "Bilhete.h"
#include "Voo.h"

using namespace std;

Bilhete::Bilhete(Passageiro passageiro, Voo voo) : voo(nullptr, Data(), nullptr, nullptr, nullptr, Passageiro(), Hora()) {
    this->passageiro = passageiro;
    this->voo = voo;
}

Passageiro Bilhete::getPassageiro() {
    return this->passageiro;
}

Voo Bilhete::getVoo() {
    return this->voo;
}

void Bilhete::setPassageiro(Passageiro passageiro1) {
    this->passageiro = passageiro1;
}

void Bilhete::setVoo(Voo voo1) {
    this->voo = voo1;
}
