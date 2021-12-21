//
// Created by ZLAmo on 05/12/2021.
//

#ifndef TRABALHO1_HORA_H
#define TRABALHO1_HORA_H

#include <string>

using namespace std;

class Hora {
    int hora;
    int minuto;

public:
    Hora();
    Hora(int hora, int minuto);

    int getHora();
    int getMinuto();
    void setHora(int hora);
    void setMinuto(int minuto);

    string toString();

    //Todas as comparações de tempo consideram que maior é mais tarde
    bool operator<(Hora hora);
    bool operator==(Hora hora);
    bool operator<=(Hora hora);
    bool operator>(Hora hora);
    bool operator>=(Hora hora);

    string toString();
};


#endif //TRABALHO1_HORA_H
