//
// Created by Z L on 28/11/2021.
//

#ifndef PASSAGEIRO_H
#define PASSAGEIRO_H

#include "Bagagem.h"
#include "Bilhete.h"
#include <string>
using namespace std;

enum TipoTicket{ECONOMICO, PRIMEIRA_CLASSE};

class Passageiro{
public:
    string nome;
    Bagagem bagagem;
//    TipoTicket tipoTicket;
    Bilhete bilhete;
    bool checkinAuto;

    public:
        Passageiro();
        Passageiro(string nome, Bagagem bagagem, Bilhete bilhete, bool checkinAuto);

        string getNome();
        Bagagem getBagagem();
        Bilhete getBilhete();
        bool getCheckinAuto();

        void setNome(string nome);
        void setBagagem(Bagagem bagagem);
        void setBilhete(Bilhete bilhete1);
        void setCheckinAuto(bool checkinAuto);

        bool verificarCheckin(Passageiro p);
};

#endif // PASSAGEIRO_H