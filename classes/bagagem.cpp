//
// Created by catar on 28/11/2021.
//

#include "bagagem.h"
using namespace std;

Bagagem::Bagagem() {
    peso = 0;
    //passageiro = null;
}

Bagagem::Bagagem(unsigned peso) {
    this->peso = peso;
    //this->passageiro = passageiro;
}

int Bagagem::getPeso() {
    return peso;
}

/*Passageiro Bagagem:getPassageiro(){
 * return passageiro;
 * }
*/

void Bagagem::setPeso(unsigned peso) {
    this->peso = peso;
}

/*void Bagagem::setPassageiro(const Passageiro passageiro){
 * this->passageiro = passageiro;
 * }
*/

