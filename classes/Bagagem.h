//
// Created by catar on 28/11/2021.
//

#ifndef TRABALHO1_BAGAGEM_H
#define TRABALHO1_BAGAGEM_H



using namespace std;

class Bagagem {
private:
    unsigned peso;


public:
    Bagagem();
    Bagagem(unsigned peso);
    int getPeso();
    void setPeso(unsigned peso);

};

#endif //TRABALHO1_BAGAGEM_H
