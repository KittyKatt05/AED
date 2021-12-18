//
// Created by catar on 15/12/2021.
//

#include "Bilhete.h"
#include "Voo.h"

using namespace std;

/**
 * Cria um objeto do tipo Bilhete com os atributos passados por parâmetro.
 * @param passageiro
 * @param voo
 */
Bilhete::Bilhete(Passageiro passageiro, Voo voo) : voo(nullptr, Data(), nullptr, nullptr, nullptr, Passageiro(), Hora()) {
    this->passageiro = passageiro;
    this->voo = voo;
}

/**
 * Permite aceder ao passageiro que possui o bilhete.
 * @return passageiro
 */
Passageiro Bilhete::getPassageiro() {
    return this->passageiro;
}

/**
 * Permite aceder ao voo do bilhete
 * @return voo
 */
Voo Bilhete::getVoo() {
    return this->voo;
}

/**
 * Permite modificar o passageiro do bilhete.
 * @param passageiro1
 */
void Bilhete::setPassageiro(Passageiro passageiro1) {
    this->passageiro = passageiro1;
}

/**
 * Permite modificar o voo do bilhete.
 * @param voo1
 */
void Bilhete::setVoo(Voo voo1) {
    this->voo = voo1;
}
