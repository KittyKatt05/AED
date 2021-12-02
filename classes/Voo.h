#ifndef TRABALHO1_FLIGHT_H
#define TRABALHO1_FLIGHT_H
#include <string>
#include "Passageiro.h"
#include "Data.h"
#include <list>

using namespace std;

class Voo{
    string numVoo;
    Data data;
    string duracao;
    string origem;
    string destino;
    list<Passageiro> passageiro;

public:
    Voo();
    Voo(string numVoo,Data data, string duracao, string origem, string destino ,Passageiro passageiro);
    string getNumVoo();
    string getData();
    string getDuracao();
    string getOrigem();
    string getDestino();
    list<Passageiro> getPassageiro();
    void setNumVoo(string flighNumber);
    void setData(Data data);
    void setDuracao(string Duracao);
    void setOrigem(string Origem);
    void setDestino(string Destino);
    void setPassageiro(list<Passageiro> passageiro);
};
#endif //TRABALHO1_FLIGHT_H