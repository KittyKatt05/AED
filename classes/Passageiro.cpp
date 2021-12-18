//
// Created by Z L on 28/11/2021.
//

#include "Passageiro.h"

using namespace std;

Passageiro::Passageiro(){}

/**
 * Cria um novo objeto do tipo passageiro com os atributos passados por parâmetro.
 * @param nome
 * @param bagagem
 * @param bilhete
 * @param checkinAuto
 */
Passageiro::Passageiro(string nome, Bagagem bagagem, Bilhete bilhete, bool checkinAuto){
    this->nome = nome;
    this->bagagem = bagagem;
    this->bilhete = bilhete;
    this->checkinAuto = checkinAuto;
}

/**
 * Permite aceder ao nome de um objeto do tipo passageiro.
 * @return nome
 */
string Passageiro::getNome(){
    return this->nome;
}

/**
 * Permite aceder à bagagem de um objeto do tipo passageiro.
 * @return bagagem
 */
Bagagem Passageiro::getBagagem(){
    return this->bagagem;
}

/**
 * Permite aceder ao bilhete de um objeto do tipo passageiro.
 * @return bilhete
 */
Bilhete Passageiro::getBilhete(){
    return this->bilhete;
}

/**
 * Permite aceder ao atributo booleano checkinAuto de um objeto do tipo passageiro, que informa se o passageiro pretende ou não
 * checkin automático.
 * @return checkinAuto
 */
bool Passageiro::getCheckinAuto() {
    return checkinAuto;
}

/**
 * Permite modificar o atributo nome de um objeto do tipo passageiro.
 * @param nome
 */
void Passageiro::setNome(string nome){
    this->nome = nome;
}

/**
 * Permite modificar o atributo bagagem de um objeto do tipo passageiro.
 * @param bagagem
 */
void Passageiro::setBagagem(Bagagem bagagem){
    this->bagagem = bagagem;
}

/**
 * Permite modificar o atributo bilhete de um objeto do tipo passageiro.
 * @param bilhete1
 */
void Passageiro::setBilhete(Bilhete bilhete1){
    this->bilhete = bilhete1;
}

/**
 * Permite modificar o atributo checkinAuto de um objeto do tipo passageiro.
 * @param checkinAuto
 */
void Passageiro::setCheckinAuto(bool checkinAuto) {
    this->checkinAuto = checkinAuto;
}

/**
 * Verifica se um dado passageiro passado por parâmetro pretende ou não realizar checkin automático. Se quiser, o atributo checkinAuto
 * deverá estar True e o método retorna True. Caso contrário retorna false, o que significa que o passageiro não pretende checkin automático.
 * @param p
 * @return true/false
 */
bool Passageiro::verificarCheckin(Passageiro p) {
    if(p.getCheckinAuto()){
        return true;
    }
    return false;
}