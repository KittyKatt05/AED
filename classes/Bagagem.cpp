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

}

/**
 * Cria um objeto do tipo Bagagem, sendo os seus atributos passados por paramêtro.
 * @param peso
 * @param passageiro1
 */
Bagagem::Bagagem(unsigned peso) {
    this->peso = peso;

}

/**
 * Permite aceder ao peso da bagagem.
 * @return peso
 */
int Bagagem::getPeso() {
    return this->peso;
}



/**
 * Permite modificar o peso da bagagem, passado por parâmetro.
 * @param peso
 */
void Bagagem::setPeso(unsigned int peso) {
    this->peso = peso;
}



