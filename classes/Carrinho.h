#ifndef TRABALHO1_CAR_H
#define TRABALHO1_CAR_H

using namespace std;

#include <string>
#include <list>
#include <queue>
#include "Carruagem.h"
#include "Bagagem.h"

class Carrinho{
    int numCarruagens;
    int Capacidade;
    queue<Bagagem> tapeteRolante;
    //list<Carruagem> Carruagens;

public:
    Carrinho();
    Carrinho(int numCarruagens, int Capacidade/*, Carruagem carruagens*/);
    int getNumCarruagens();
    int getCapacidade();
    void setNumCarruagens(int numCarruagens);
    void setCapacidade (int Capacidade);
    queue<Bagagem> getTapeteRolante();
    void criarQueueTapeteRolante();

};
#endif //TRABALHO1_CAR_H