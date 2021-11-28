//
// Created by catar on 28/11/2021.
//

#include <string>
#ifndef TRABALHO1_AEROPORTO_H
#define TRABALHO1_AEROPORTO_H


using namespace std;

class Aeroporto {
    string pais;
    string cidade;
    string nome;
    // BinaryTree<T> locaisTransporte

public:
    Aeroporto();
    Aeroporto(string cidade, string nome, string pais);
    string getCidade();
    string getNome();
    string getPais();
    void setCidade(string cidade);
    void setNome(string nome);
    void setPais(string pais);
    //BinaryTree removeLocalTranporte();

};

#endif //TRABALHO1_AEROPORTO_H