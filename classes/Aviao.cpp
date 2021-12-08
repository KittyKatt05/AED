//
// Created by Z L on 28/11/2021.
//

#include "Aviao.h"

using namespace std;

Aviao::Aviao(){}
Aviao::Aviao(string matricula1, string tipo1, double capacidade1, list<Voo> planoDeVoo1){
    this->matricula = matricula1;
    this->tipo = tipo1;
    this->capacidade = capacidade1;
    this->planoDeVoo = planoDeVoo1;

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

void Aviao::setMatricula(string matricula1){
    this->matricula = matricula1;
}

void Aviao::setTipo(string tipo1){
    this->tipo = tipo1;
}

void Aviao::setCapacidade(double capacidade1){
    this->capacidade = capacidade1;
}

void Aviao::setBagagem(list<Bagagem> bagagem1){
    this->bagagem = bagagem;
}

void Aviao::addBagagem(Bagagem bagagem1){
    this->bagagem.push_back(bagagem1);
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

void Aviao::setPlanoDeVoo(list<Voo> planoDeVoo1) {
    this->planoDeVoo = planoDeVoo1;
}

void Aviao::setCronogramaManutencao(queue<Manutencao> cronogramaManutencao1) {
    this->cronogramaManutencao = cronogramaManutencao1;
}

void Aviao::setManutencaoFeita(list<Manutencao> manutencaoFeita1) {
    this->manutencaoFeita = manutencaoFeita1;
}

void Aviao::addVoo(Voo voo1) {
    this->planoDeVoo.push_back(voo1);
}

void Aviao::addManutencao(Manutencao manutencao1) {
    if( manutencao1.operator>(this->cronogramaManutencao.back())){
        this->cronogramaManutencao.push(manutencao1);
    }else{
        //não adiciona porque seria no mesmo dia ou antes da última manutenção adicionada
    }
}

void Aviao::fazerManutencao() {
    if(not(this->cronogramaManutencao.empty())) {
        this->manutencaoFeita.push_back(this->cronogramaManutencao.front());
        this->cronogramaManutencao.pop();
    }else{
        // não tem nenhuma manutenção no cronograma
    }
}