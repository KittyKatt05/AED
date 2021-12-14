#ifndef TRABALHO1_FLIGHT_H
#define TRABALHO1_FLIGHT_H
#include <string>
#include "Passageiro.h"
#include <queue>
#include "Data.h"
#include "Hora.h"
#include <list>
#include <iostream>
#include <fstream>

using namespace std;

class Voo{
    string numVoo;
    Data data;
    Hora partida;
    string duracao;
    string origem;
    string destino;
public:
    list<Passageiro> passageiro;
    queue<Bagagem> tapeteRolante;


public:
    Voo();
    Voo(string numVoo,Data data, string duracao, string origem, string destino ,Passageiro passageiro,Hora partida);

    string getNumVoo();
    string getData();
    string getPartida();
    string getDuracao();
    string getOrigem();
    string getDestino();
    list<Passageiro> getPassageiro();

    void setNumVoo(string flighNumber);
    void setData(Data data);
    void setPartida(Hora hora1);
    void setDuracao(string Duracao);
    void setOrigem(string Origem);
    void setDestino(string Destino);
    void setPassageiro(list<Passageiro> passageiro);

    void addPassageirotoLista(Passageiro passageiro1);

    queue<Bagagem> getTapeteRolante();
    void setTapeteRolante(queue<Bagagem> tapeteRolante1);
    void addToTapeteRolante(Bagagem bagagem);
    void createTapeteRolante();
    void printToFileTapeteRolante();


};
#endif //TRABALHO1_FLIGHT_H