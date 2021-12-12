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
    bool checkinAuto;

    public:
        Passageiro();
        Passageiro(string nome, Bagagem bagagem, TipoTicket tipoTicket, bool checkinAuto);

        string getNome();
        Bagagem getBagagem();
        TipoTicket getTipoTicket();
        bool getCheckinAuto();

        void setNome(string nome);
        void setBagagem(Bagagem bagagem);
        void setTipoTicket(TipoTicket tipoTicket);
        void setCheckinAuto(bool checkinAuto);
};

#endif // PASSAGEIRO_H