//
// Created by catar on 28/11/2021.
//

#include "Carruagem.h"
using namespace std;

Carruagem::Carruagem() {
    this->listStacks.clear();
}

Carruagem::Carruagem(list<stack<int>> listStacks) {
    this->listStacks = listStacks;
}

void Carruagem::addStack(stack<int> stackMalas) {
    listStacks.push_back(stackMalas);
}

list<stack<int>> Carruagem::getStacks() {
    return listStacks;
}

void Carruagem::setListStacks(list<stack<int>> listStacks) {
    this->listStacks = listStacks;
}

void Carruagem::removeStack() {
    listStacks.pop_front();
}
