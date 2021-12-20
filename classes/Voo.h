#ifndef TRABALHO1_FLIGHT_H
#define TRABALHO1_FLIGHT_H
#include <string>
#include "Passageiro.h"
#include <queue>
#include <stack>
#include "Data.h"
#include "Hora.h"
#include <list>
#include <iostream>
#include <fstream>

using namespace std;

class Voo{
private:
    string numVoo;
    Data data;
    Hora partida;
    string duracao;
    string origem;
    string destino;
    const int maxPorPilha = 5;
    const int maxPorCarruagem = 3;
    list<Passageiro> passageiro;
    queue<Bagagem> tapeteRolante;
    stack<Bagagem> pilhaCarruagem;
    list<stack<Bagagem>> carruagem;
    list<list<stack<Bagagem>>> carrinho;
    stack<Bagagem> bagagemAviao;


public:

    Voo(string numVoo,Data data, string duracao, string origem, string destino ,list<Passageiro> passageiro,Hora partida);

    string getNumVoo();
    string getData();
    string getPartida();
    string getDuracao();
    string getOrigem();
    string getDestino();
    list<Passageiro> getPassageiro();

    void setNumVoo(string flighNumber);
    void setData(Data data);
    void setPartida(Hora hora1);
    void setDuracao(string Duracao);
    void setOrigem(string Origem);
    void setDestino(string Destino);
    void setPassageiro(list<Passageiro> passageiro);

    void addPassageirotoLista(Passageiro passageiro1);

    queue<Bagagem> getTapeteRolante();
    void setTapeteRolante(queue<Bagagem> tapeteRolante1);
    void addToTapeteRolante(Bagagem bagagem);
    void createTapeteRolante();
    void removeFromTapeteRolante();
    void printToFileTapeteRolante();

    stack<Bagagem> getPilhaCarruagem();
    void setPilhaCarruagem(stack<Bagagem> pilhaCarruagem);
    void addToPilha(Bagagem bagagem);
    void createPilha();
    void clearPilha();
    void removeFromPilha();

    list<stack<Bagagem>> getCarruagem();
    void addToCarruagem(stack<Bagagem> stackBagagem);
    void createCarruagem();
    void clearCarruagem();

    void addToCarrinho(list<stack<Bagagem>> carruagem);
    void createCarrinho();

    stack<Bagagem> getStackAviao();
    void createStackAviao();
    void addStackAviao(Bagagem bagagem);
    void removeStackAviao();


};
#endif //TRABALHO1_FLIGHT_H