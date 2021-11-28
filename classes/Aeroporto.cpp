//
// Created by catar on 28/11/2021.
//

#include "Aeroporto.h"
using namespace std;

Aeroporto::Aeroporto() {
    cidade = "null";
    nome = "null";

}

Aeroporto::Aeroporto(string cidade, string nome, string pais) {
    this->cidade = cidade;
    this->nome = nome;
    this->pais = pais;
}

string Aeroporto::getCidade() {
    return cidade;
}

string Aeroporto::getNome() {
    return nome;
}

string Aeroporto::getPais() {
    return pais;
}

void Aeroporto::setCidade(const string cidade) {
    this->cidade = cidade;
}

void Aeroporto::setNome(const string nome) {
    this->nome = nome;
}

void Aeroporto::setPais(string pais) {
    this->pais = pais;
}

