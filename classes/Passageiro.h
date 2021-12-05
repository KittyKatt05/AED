//
// Created by Z L on 28/11/2021.
//

#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H

#include "Bagagem.h"
#include <string>
using namespace std;

enum TipoTicket{ECONOMICO, PRIMEIRA_CLASSE};

class Passageiro{
    string nome;
    Bagagem bagagem;
    TipoTicket tipoTicket;

    public:
        Passageiro();
        Passageiro(string nome, Bagagem bagagem, TipoTicket tipoTicket);

        string getNome();
        Bagagem getBagagem();
        TipoTicket getTipoTicket();

        void setNome(string nome);
        void setBagagem(Bagagem bagagem);
        void setTipoTicket(TipoTicket tipoTicket);
};

#endif // PASSAGEIRO_H