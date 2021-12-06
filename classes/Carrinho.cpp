
#include <string>
#include "Carrinho.h"

Carrinho::Carrinho(){
    numCarruagens = 0;
    Capacidade = 0;
}

Carrinho::Carrinho(int numCarruagens, int Capacidade){
    this-> numCarruagens = numCarruagens;
    this-> Capacidade = Capacidade;
}

int Carrinho::getNumCarruagens() {
    return this-> numCarruagens;
}

int Carrinho::getCapacidade() {
    return this-> Capacidade;
}

void Carrinho::setNumCarruagens(int numCarruagens) {
    this-> numCarruagens = numCarruagens;
}

void Carrinho::setCapacidade(int Capacidade) {
    this-> Capacidade = Capacidade;
}

