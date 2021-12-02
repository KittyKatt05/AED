//
// Created by Z L on 28/11/2021.
//

#include "Aviao.h"

using namespace std;

Aviao::Aviao(){}
Aviao::Aviao(string matricula, string tipo, double capacidade, list<Voo> planoDeVoo,
     queue<Manutencao> cronogramaManutencao, list<Manutencao> manutencaoFeita, list<Bagagem> bagagem){
    this->matricula = matricula;
    this->tipo = tipo;
    this->capacidade = capacidade;
    this->planoDeVoo = planoDeVoo;
    this->cronogramaManutencao = cronogramaManutencao;
    this->manutencaoFeita = manutencaoFeita;
    this->bagagem = bagagem;

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

list<Voo> Aviao::getPlanoDeVoo() {
    return this->planoDeVoo;
}

queue<Manutencao> Aviao::getCronogramaManutencao() {
    return this->cronogramaManutencao;
}

list<Manutencao> Aviao::getManutencaoFeita() {
    return this->manutencaoFeita;
}

void Aviao::setPlanoDeVoo(list<Voo> planoDeVoo) {
    this->planoDeVoo = planoDeVoo;
}

void Aviao::setCronogramaManutencao(queue<Manutencao> cronogramaManutencao) {
    this->cronogramaManutencao = cronogramaManutencao;
}

void Aviao::setManutencaoFeita(list<Manutencao> manutencaoFeita) {
    this->manutencaoFeita = manutencaoFeita;
}


