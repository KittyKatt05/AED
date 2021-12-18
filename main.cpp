#include <iostream>
#include <list>
#include <queue>
#include "classes/Manutencao.h"
#include "classes/Aviao.h"
#include "classes/Voo.h"
#include "classes/Data.h"
#include "classes/Passageiro.h"
#include "classes/Bagagem.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    list<Voo> planoDeVoo;
    Data data = Data(1,2,2000);
    Bagagem bagagem1 = Bagagem();
    Passageiro passageiro1 = Passageiro();
    Voo voo1 = Voo("57", data, "12", "Aqui", "la", passageiro1, Hora(5,15));
    planoDeVoo.push_back(voo1);
    Aviao aviao1 = Aviao("ab", "tipo", 15, planoDeVoo);
    Manutencao manutencao1 = Manutencao(1,"alguem", Data(1,2,2003),TipoDeServico(MANUTENCAO));
    aviao1.addManutencao(manutencao1);
    aviao1.fazerManutencao();



//    Passageiro p2 = new Passageiro("Ana", new Bagagem(12, p2), new Bilhete(p2, new Voo("12", data, "45", "Dubai", "Londres", p2, Hora(6,12))), true);
    return 0;
}
