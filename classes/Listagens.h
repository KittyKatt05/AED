//
// Created by catar on 18/12/2021.
//

#ifndef TRABALHO1_LISTAGENS_H
#define TRABALHO1_LISTAGENS_H

#include "Voo.h"
#include "Aviao.h"
#include "Aeroporto.h"

using namespace std;

class Listagens {

    //CLASSE ONDE SE VAI GUARDAR EM FICHEIRO
    list<Voo> listaVoos;
    list<Aviao> listaAvioes;
    list<Aeroporto> listaAeroportos;
    list<Passageiro> passageiros;


public:
    void carregarPassageiros();
    void carregarVoo();
    void carregarAeroportos();
    void carregarAvioes();

    void guardarPassageiros();
    void guardarVoo();
    void guardarAeroportos();
    void guardarAvioes();


};

#endif //TRABALHO1_LISTAGENS_H
