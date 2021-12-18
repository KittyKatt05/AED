#include "Voo.h"

using namespace std;

Voo::Voo(const char string1[3], Data data1, const char string2[3], const char string3[6], const char string4[8],
         Passageiro passageiro1, Hora hora) {
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

void Voo::addPassageirotoLista(Passageiro passageiro1) {
    passageiro.push_back(passageiro1);
}

//-----------------------------Tapete Rolante---------------------------------------------------------------------------
queue<Bagagem> Voo::getTapeteRolante() {
    return tapeteRolante;
}

void Voo::addToTapeteRolante(Bagagem bagagem) {
    tapeteRolante.push(bagagem);
}

void Voo::setTapeteRolante(queue<Bagagem> tapeteRolante1) {
    this->tapeteRolante = tapeteRolante1;
}

void Voo::removeFromTapeteRolante() {
    tapeteRolante.pop();
}

void Voo::createTapeteRolante() {
    auto it = passageiro.begin();
    while(it != passageiro.end()){
        if(it->checkinAuto){
            addToTapeteRolante((*it).getBagagem());
        }
        it++;
    }
}

//---------------------------------Stacks da Carruagem------------------------------------------------------------------

stack<Bagagem> Voo::getPilhaCarruagem() {
    return pilhaCarruagem;
}

void Voo::setPilhaCarruagem(stack<Bagagem> pilhaCarruagem) {
    this->pilhaCarruagem = pilhaCarruagem;
}

void Voo::addToPilha(Bagagem bagagem) {
    pilhaCarruagem.push(bagagem);
}

void Voo::removeFromPilha() {
    pilhaCarruagem.pop();
}

void Voo::clearPilha(){
    while(!pilhaCarruagem.empty()){
        pilhaCarruagem.pop();
    }
}

void Voo::createPilha() {
    clearPilha();
    while(pilhaCarruagem.size()< maxPorPilha){
        addToPilha(tapeteRolante.front());
        removeFromTapeteRolante();
    }
}

list<stack<Bagagem>> Voo::getCarruagem() {
    return carruagem;
}

void Voo::clearCarruagem() {
    carruagem.clear();
}

void Voo::addToCarruagem(stack<Bagagem> stackBagagem) {
    carruagem.push_back(stackBagagem);
}

void Voo::createCarruagem() {
    clearCarruagem();
    while(carruagem.size() < maxPorCarruagem){
        createPilha();
        addToCarruagem(pilhaCarruagem);
    }
}

void Voo::addToCarrinho(list<stack<Bagagem>> carruagemS) {
    carrinho.push_back(carruagemS);
}

void Voo::createCarrinho(){
    while(!tapeteRolante.empty()){
        createCarruagem();
        addToCarrinho(carruagem);
    }
}

//----------------------------------------------------Bagagens para aviao-----------------------------------------------

stack<Bagagem> Voo::getStackAviao() {
    return bagagemAviao;
}

void Voo::createStackAviao() {
    auto it = carrinho.begin();
    while(it != carrinho.end()){
        addStackAviao(it->front().top());
        it = --carrinho.erase(it);
        it++;
    }
}

void Voo::addStackAviao(Bagagem bagagem) {
    bagagemAviao.push(bagagem);
}

void Voo::removeStackAviao() {
    bagagemAviao.pop();
}