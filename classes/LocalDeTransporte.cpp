//
// Created by Z L on 28/11/2021.
//

#include "LocalDeTransporte.h"

using namespace std;

LocalDeTransporte::LocalDeTransporte(){}
LocalDeTransporte::LocalDeTransporte(double distancia/*, Time horario*/){
    this->distancia = distancia;
    this->id = this->nextId++;
    //TODO
}

int LocalDeTransporte::getId(){
    return this->id;
}

double LocalDeTransporte::getDistancia(){
    return this->distancia;
}

void LocalDeTransporte::setDistancia(double distancia){
    this->distancia = distancia;
}