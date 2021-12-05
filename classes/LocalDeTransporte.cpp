//
// Created by Z L on 28/11/2021.
//

#include "LocalDeTransporte.h"

using namespace std;

LocalDeTransporte::LocalDeTransporte()= default;
LocalDeTransporte::LocalDeTransporte(double distancia, Hora horario){
    this->distancia = distancia;
    this->id = this->nextId++;
    this->horario = horario;
}

int LocalDeTransporte::getId(){
    return this->id;
}

double LocalDeTransporte::getDistancia(){
    return this->distancia;
}

Hora LocalDeTransporte::getHorario() {
    return this->horario;
}

void LocalDeTransporte::setDistancia(double distancia){
    this->distancia = distancia;
}

void LocalDeTransporte::setHorario(Hora horario) {
    this->horario = horario;
}


