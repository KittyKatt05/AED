//
// Created by catar on 06/12/2021.
//

#include "checkin.h"
using namespace std;

bool Checkin::verificarCheckin(Passageiro p) {
    if(p.getCheckinAuto()){
        return true;
    }
    return false;
}

void Checkin::criarQueueTapeteRolante() {

}

queue <Bagagem> Checkin::getTapeteRolante() {
    return tapeteRolante;
}