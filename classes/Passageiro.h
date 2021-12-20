//
// Created by Z L on 28/11/2021.
//

#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H

#include "Bagagem.h"
#include <string>
using namespace std;

enum TipoTicket{ECONOMICO, PRIMEIRA_CLASSE};

class Passageiro {
private:
    string nome;
    Bagagem bagagem;

public:
        Passageiro(string nome, Bagagem bagagem, bool checkinAuto);

        string getNome();
        Bagagem getBagagem();
        bool getCheckinAuto();

        void setNome(string nome);
        void setBagagem(Bagagem bagagem);
        void setCheckinAuto(bool checkinAuto);

        bool verificarCheckin(Passageiro p);

//    TipoTicket tipoTicket;
    bool checkinAuto;
};

#endif // PASSAGEIRO_H