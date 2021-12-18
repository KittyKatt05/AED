//
// Created by catar on 28/11/2021.
//

#include "Bagagem.h"
using namespace std;

/**
 * Cria um objeto do tipo Bagagem por default.
 */
Bagagem::Bagagem() {
    peso = 0;
    passageiro = 'null';
}

/**
 * Cria um objeto do tipo Bagagem, sendo os seus atributos passados por paramêtro.
 * @param peso
 * @param passageiro1
 */
Bagagem::Bagagem(unsigned peso, Passageiro passageiro1) {
    this->peso = peso;
    this->passageiro = passageiro1;
}

/**
 * Permite aceder ao peso da bagagem.
 * @return peso
 */
int Bagagem::getPeso() {
    return this->peso;
}

/**
 * Permite aceder ao passageiro da bagagem em questão.
 * @return passageiro
 */
Passageiro Bagagem::getPassageiro() {
    return this->passageiro;
}

/**
 * Permite modificar o peso da bagagem, passado por parâmetro.
 * @param peso
 */
void Bagagem::setPeso(unsigned int peso) {
    this->peso = peso;
}

/**
 * Permite modificar o passageiro da bagagem, sendo passado por parâmetro.
 * @param passageiro
 */
void Bagagem::setPassageiro(Passageiro passageiro) {
    this->passageiro = passageiro;
}

