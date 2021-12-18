//
// Created by catar on 15/12/2021.
//

#ifndef TRABALHO1_BILHETE_H
#define TRABALHO1_BILHETE_H

#include "Passageiro.h"
#include "Voo.h"

class Bilhete{
public:


    Passageiro passageiro;
    Voo voo;

public:
    Bilhete();
    Bilhete(Passageiro passageiro, Voo voo);

    Passageiro getPassageiro();
    Voo getVoo();

    void setPassageiro(Passageiro passageiro1);
    void setVoo(Voo voo1);

};

#endif //TRABALHO1_BILHETE_H
