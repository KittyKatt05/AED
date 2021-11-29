//
// Created by Z L on 28/11/2021.
//

#include "Aviao.h"

using namespace std;

Aviao::Aviao(){}
Aviao::Aviao(string matricula, string tipo, double capacidade/*, Voo flightPlan,
     queue<Manutencao> cronogramaManutencao, queue<Manutencao> manutencaoFeita, Bagagem bagagem*/){
    this->matricula = matricula;
    this->tipo = tipo;
    this->capacidade = capacidade;
    // TODO
}

string Aviao::getMatricula(){
    return this->matricula;
}

string Aviao::getTipo(){
    return this->tipo;
}

double Aviao::getCapacidade(){
    return this->capacidade;
}

list<Bagagem> Aviao::getBagagem(){
    return this->bagagem;
}

void Aviao::setMatricula(string matricula){
    this->matricula = matricula;
}

void Aviao::setTipo(string tipo){
    this->tipo = tipo;
}

void Aviao::setCapacidade(double capacidade){
    this->capacidade = capacidade;
}

void Aviao::setBagagem(list<Bagagem> Bagagem){
    this->bagagem = bagagem;
}

void Aviao::addBagagem(Bagagem bagagem){
    this->bagagem.push_back(bagagem);
}
