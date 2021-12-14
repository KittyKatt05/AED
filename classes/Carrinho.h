#ifndef TRABALHO1_CAR_H
#define TRABALHO1_CAR_H

using namespace std;

#include <string>
#include <list>
#include <queue>
#include "Carruagem.h"
#include "Bagagem.h"
#include "Voo.h"

class Carrinho{
    int numCarruagens;
    int Capacidade;


public:
    Carrinho();
    Carrinho(int numCarruagens, int Capacidade/*, Carruagem carruagens*/);
    int getNumCarruagens();
    int getCapacidade();
    void setNumCarruagens(int numCarruagens);
    void setCapacidade (int Capacidade);


};
#endif //TRABALHO1_CAR_H