//
// Created by catar on 28/11/2021.
//


#ifndef TRABALHO1_CARRUAGEM_H
#define TRABALHO1_CARRUAGEM_H
# include <stack>
#include <list>
using namespace std;

class Carruagem {
    list<stack<int>> listStacks;


public:
    Carruagem();
    Carruagem(list<stack<int>> listStacks);
    void addStack(stack<int> stackMalas);
    list<stack<int>> getStacks();
    void setListStacks(list<stack<int>> listStacks);
    void removeStack();



};

#endif //TRABALHO1_CARRUAGEM_H
