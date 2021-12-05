//
// Created by catar on 28/11/2021.
//

#ifndef TRABALHO1_BAGAGEM_H
#define TRABALHO1_BAGAGEM_H

#include "Passageiro.h"

using namespace std;

class Bagagem {
    unsigned peso;
    Passageiro passageiro;

public:
    Bagagem();
    Bagagem(unsigned peso, Passageiro passageiro1);
    int getPeso();
    Passageiro getPassageiro();
    void setPeso(unsigned peso);
    void setPassageiro(Passageiro passageiro);

};

#endif //TRABALHO1_BAGAGEM_H
