//
// Created by catar on 28/11/2021.
//

#include <string>
#include "Aviao.h"
#include<list>

#ifndef TRABALHO1_AEROPORTO_H
#define TRABALHO1_AEROPORTO_H


using namespace std;

class Aeroporto {
    string pais;
    string cidade;
    string nome;
    list<Aviao> listaAvioes;
    // BinaryTree<T> locaisTransporte

public:
    Aeroporto();
    Aeroporto(string cidade, string nome, string pais);

    string getCidade();
    string getNome();
    string getPais();
    list<Aviao> getListaAvioes();

    void setCidade(string cidade);
    void setNome(string nome);
    void setPais(string pais);
    void setListaAvioes(list<Aviao> listaAvioes);

    void addAviaoToListaAvioes(Aviao aviao);
    //BinaryTree removeLocalTranporte();

};

#endif //TRABALHO1_AEROPORTO_H