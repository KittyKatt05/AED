//
// Created by Z L on 28/11/2021.
//

#ifndef TRABALHO1_LOCAL_DE_TRANSPORTE_H
#define TRABALHO1_LOCAL_DE_TRANSPORTE_H

using namespace std;

class LocalDeTransporte{
    static int nextId;
    int id;
    double distancia;
    //Time horario;

    public:
        LocalDeTransporte();
        LocalDeTransporte(double distancia/*,Time horario*/);

        int getId();
        double getDistancia();
        /*
        Time getHorario();
        */
        void setDistancia(double distancia);
        /*
        void setHorario(Time horario);
        */
};


#endif // TRABALHO1_LOCAL_DE_TRANSPORTE_H