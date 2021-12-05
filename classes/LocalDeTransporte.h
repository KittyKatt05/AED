//
// Created by Z L on 28/11/2021.
//

#ifndef TRABALHO1_LOCAL_DE_TRANSPORTE_H
#define TRABALHO1_LOCAL_DE_TRANSPORTE_H
#include "Hora.h"

using namespace std;

class LocalDeTransporte{
    static int nextId;
    int id{};
    double distancia{};
    Hora horario;

    public:
        LocalDeTransporte();
        LocalDeTransporte(double distancia,Hora horario);

        int getId();
        double getDistancia();
        Hora getHorario();
        void setDistancia(double distancia);
        void setHorario(Hora horario);
};


#endif // TRABALHO1_LOCAL_DE_TRANSPORTE_H