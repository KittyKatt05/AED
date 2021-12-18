//
// Created by catar on 28/11/2021.
//

#include "Aeroporto.h"

using namespace std;

/**
 * Cria um objeto do tipo Aeroporto por default.
 */
Aeroporto::Aeroporto() {
    cidade = "null";
    nome = "null";

}

/**
 * Cria um objeto do tipo Aeroporto com os atributos passados por parâmetro.
 * @param cidade
 * @param nome
 * @param pais
 */
Aeroporto::Aeroporto(string cidade, string nome, string pais) {
    this->cidade = cidade;
    this->nome = nome;
    this->pais = pais;
}

/**
 * Permite aceder ao atributo cidade de Aeroporto.
 * @return cidade
 */
string Aeroporto::getCidade() {
    return cidade;
}

/**
 * Permite aceder ao nome do Aeroporto.
 * @return nome
 */
string Aeroporto::getNome() {
    return nome;
}

/**
 * Permite aceder ao país do Aeroporto.
 * @return pais
 */
string Aeroporto::getPais() {
    return pais;
}

/**
 * Permite aceder à lista de aviões.
 * @return listaAVioes
 */
list<Aviao> Aeroporto::getListaAvioes() {
    return listaAvioes;
}

/**
 * Modifica o atributo cidade do objeto Aeroporto.
 * @param cidade
 */
void Aeroporto::setCidade(const string cidade) {
    this->cidade = cidade;
}

/**
 * Modifica o atributo nome do objeto Aeroporto.
 * @param nome
 */
void Aeroporto::setNome(const string nome) {
    this->nome = nome;
}

/**
 * Modifica o atributo país do objeto Aeroporto.
 * @param pais
 */
void Aeroporto::setPais(string pais) {
    this->pais = pais;
}

/**
 * Permite modificar a lista de aviões, sendo substituida pela lista passada por parâmetro
 * @param listaAvioes
 */
void Aeroporto::setListaAvioes(list<Aviao> listaAvioes) {
    this->listaAvioes = listaAvioes;
}

/**
 * Permite adicionar um novo avião à lista de aviões
 * @param aviao
 */
void Aeroporto::addAviaoToListaAvioes(Aviao aviao) {
    listaAvioes.push_back(aviao);
}



