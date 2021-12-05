#include "Voo.h"

using namespace std;

Voo::Voo(){
    numVoo = 'null';
    duracao = 'null';
    origem = 'null';
    destino = 'null';
}

Voo::Voo(string numVoo,Data date, string duracao, string origem, string destino ,Passageiro passageiro,Hora partida) {
    this -> numVoo = numVoo;
    this -> duracao = duracao;
    this -> origem = origem;
    this -> destino = destino;
    this->partida = partida;
}

string Voo::getNumVoo() {
    return this-> numVoo;
}

string Voo::getData() {
    return this->data.toString();
}

string Voo::getPartida() {
    return this->partida.toString();
}

string Voo::getDuracao() {
    return this-> duracao;
}

string Voo::getOrigem() {
    return this-> origem;
}

string Voo::getDestino() {
    return this-> destino;
}

void Voo::setData(Data data) {
    this->data = data;
}

void Voo::setPartida(Hora hora1) {
    this->partida = hora1;
}

list<Passageiro> Voo::getPassageiro() {
    return this-> passageiro;
}

void Voo::setNumVoo(string numVoo) {
    this-> numVoo = numVoo;
}

void Voo::setDuracao(string duracao) {
    this-> duracao = duracao;
}

void Voo::setOrigem(string origem) {
    this-> origem = origem;
}

void Voo::setDestino(string destino) {
    this-> destino = destino;
}

void Voo::setPassageiro(list<Passageiro> passageiro) {
    this-> passageiro = passageiro;
}
