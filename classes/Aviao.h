//
// Created by Z L on 28/11/2021.
//

#ifndef TRABALHO1_AVIAO_H
#define TRABALHO1_AVIAO_H

#include "Bagagem.h"
#include "Voo.h"
#include "Manutencao.h"
#include <string>
#include <list>
#include <queue>

using namespace std;

class Aviao{

string matricula;
string tipo;
double capacidade;
list<Voo> planoDeVoo;
queue<Manutencao> cronogramaManutencao;
list<Manutencao> manutencaoFeita;
list<Bagagem> bagagem;

public:
    Aviao();
    Aviao(string matricula1, string tipo1, double capacidade1, list<Voo> planoDeVoo1);

    string getMatricula();
    string getTipo();
    double getCapacidade();
    list<Bagagem> getBagagem();

    list<Voo> getPlanoDeVoo();
    queue<Manutencao> getCronogramaManutencao();
    list<Manutencao> getManutencaoFeita();

    void setMatricula(string matricula1);
    void setTipo(string tipo1);
    void setCapacidade(double capacidade1);
    void setBagagem(list<Bagagem> bagagem1);

    void setPlanoDeVoo(list<Voo> planoDeVoo1);
    void setCronogramaManutencao(queue<Manutencao> cronogramaManutencao1);
    void setManutencaoFeita(list<Manutencao> manutencaoFeita1);

    void addVoo(Voo voo1);
    void addManutencao(Manutencao manutencao1);
    void addBagagem(Bagagem bagagem1);

    void fazerManutencao();
};


#endif //TRABALHO1_AVIAO_H