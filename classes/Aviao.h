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
    Aviao(string matricula, string tipo, double capacidade, list<Voo> planoDeVoo,
          queue<Manutencao> cronogramaManutencao, list<Manutencao> manutencaoFeita, list<Bagagem> bagagem);

    string getMatricula();
    string getTipo();
    double getCapacidade();
    list<Bagagem> getBagagem();

    list<Voo> getPlanoDeVoo();
    queue<Manutencao> getCronogramaManutencao();
    list<Manutencao> getManutencaoFeita();

    void setMatricula(string matricula);
    void setTipo(string tipo);
    void setCapacidade(double capacidade);
    void setBagagem(list<Bagagem> bagagem);

    void setPlanoDeVoo(list<Voo> planoDeVoo);
    void setCronogramaManutencao(queue<Manutencao> cronogramaManutencao);
    void setManutencaoFeita(list<Manutencao> manutencaoFeita);

    void addVoo(Voo voo);
    void addManutencao(Manutencao manutencao);

   void addBagagem(Bagagem bagagem);
};


#endif //TRABALHO1_AVIAO_H