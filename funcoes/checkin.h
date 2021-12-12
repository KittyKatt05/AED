//
// Created by catar on 06/12/2021.
//

#ifndef TRABALHO1_CHECKIN_H
#define TRABALHO1_CHECKIN_H
# include <stack>
#include <list>
#include <queue>
#include "../classes/Passageiro.h"

using namespace std;

class Checkin {
    Passageiro passageiro;
    queue<Bagagem> tapeteRolante;



public:
    queue<Bagagem> getTapeteRolante();
    bool verificarCheckin(Passageiro p);
    void criarQueueTapeteRolante();
};
















#endif //TRABALHO1_CHECKIN_H
