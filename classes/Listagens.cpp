//
// Created by catar on 18/12/2021.
//

#include "Listagens.h"

using namespace std;

void Listagens::guardarPassageiros() {
    ofstream file_out;
    file_out.open("Passageiros.txt");
    file_out << passageiros.size() << endl;

    if(file_out.is_open()){
        for(auto it : passageiros){
            file_out << it.getNome() << endl;
            file_out << it.getBagagem().getPeso() << endl;
            file_out << it.getCheckinAuto() << endl;

        }
    }
}


void Listagens::guardarVoo() {
    ofstream file_out;

    file_out.open("Voo.txt");
    file_out << listaVoos.size() << endl;

    if(file_out.is_open()){
        for(auto it : listaVoos){
            file_out << it.getNumVoo() << endl;
            file_out << it.getDuracao() << endl;
            file_out << it.getData() << endl;
            file_out << it.getPartida() << endl;
            file_out << it.getOrigem() << endl;
            file_out << it.getDestino() << endl;
            file_out << it.getStackAviao().size() << endl;
            file_out << it.getPassageiro().size() << endl;
            for(auto iter : it.getPassageiro()){
                file_out << iter.getNome() << endl;
            }
        }
    }


}

void Listagens::guardarAeroportos() {
    ofstream file_out;

    file_out.open("Aeroportos.txt");
    file_out << listaAeroportos.size() << endl;

    if(file_out.is_open()){
        for(auto it : listaAeroportos){
            file_out << it.getNome() << endl;
            file_out << it.getPais() << endl;
            file_out << it.getCidade() << endl;
        }
    }
}

void Listagens::guardarAvioes() {
    ofstream file_out;

    file_out.open("Avioes.txt");
    file_out << listaAvioes.size() << endl;

    if(file_out.is_open()){
        for(auto it : listaAvioes){
            file_out << it.getMatricula() << endl;
            file_out << it.getTipo() << endl;
            file_out << it.getCapacidade() << endl;
            file_out << it.getPlanoDeVoo().size() << endl;
            for(auto iter : it.getPlanoDeVoo()){
                file_out << iter.getNumVoo();
            }
        }
    }
}

void Listagens::carregarPassageiros() {
    ifstream  file_in;
    file_in.open("Passageiros.txt");

    string nome;
    unsigned peso;
    bool checkin;
    int numTotalPassageiros;

    if(file_in.is_open()){
        file_in >> numTotalPassageiros;
        for(int i = 0; i < numTotalPassageiros; i++){
            file_in >> nome;
            file_in >> peso;
            file_in >> checkin;
            Bagagem b(peso);
            Passageiro p(nome, b, checkin);
            passageiros.push_back(p);
        }
    }
}
void Listagens::carregarVoo() {
    ifstream file_in;

    file_in.open("Voo.txt");

    list<Passageiro> aux;

    int numTotalVoos, dia, mes, ano, h, min, nbagagem, npasssageiros;
    string numVoo, duracao, origem, destino, nome;
    unsigned peso;
    bool checkin;

    if(file_in.is_open()){
        file_in >> numTotalVoos;
        for(int i = 0; i < numTotalVoos; i++){
            file_in >> numVoo;
            file_in >> duracao;
            file_in >> dia >> mes >> ano;
            Data data (dia, mes, ano);
            file_in >> h >> min;
            Hora hora(h, min);
            file_in >> origem;
            file_in >> destino;
            file_in >> nbagagem;
            file_in >> npasssageiros;
            for(int i = 0; i < npasssageiros; i++){
                file_in >> nome;
                for(auto it : passageiros){
                    if(nome == it.getNome()){
                        peso = it.getBagagem().getPeso();
                        checkin = it.getCheckinAuto();
                        Bagagem b(peso);
                        Passageiro p(nome, b, checkin);
                        aux.push_back(p);
                    }
                }
            }
            Voo v(numVoo, data, duracao, origem, destino, aux , hora);
            listaVoos.push_back(v);
        }
    }
}

void Listagens::carregarAeroportos() {
    ifstream  file_in;

    file_in.open("Aeroportos.txt");

    int totalAeroportos;
    string nome, pais, cidade;

    if(file_in.is_open()){
        file_in >> totalAeroportos;
        for(size_t i = 0; i < totalAeroportos; i++){
            file_in >> nome;
            file_in >> pais;
            file_in >> cidade;
            Aeroporto aero(cidade, nome, pais);
            listaAeroportos.push_back(aero);
        }
    }
}

void Listagens::carregarAvioes() {
    ifstream file_in;

    file_in.open("Avioes.txt");

    list<Voo> aux;

    int totalAvioes, totalVoos;
    double capacidade;
    string matricula, tipo, numVoo, duracao, origem, destino, data, hora;
    list<Passageiro> auxPass;

    if(file_in.is_open()){
        file_in >> totalAvioes;
        for(size_t i = 0; i < totalAvioes; i++){
            file_in >> matricula;
            file_in >> tipo;
            file_in >> capacidade;
            file_in >> totalVoos;
            for(int i = 0; i < totalVoos; i++){
                file_in >> numVoo;
                for(auto it : listaVoos){
                    if(numVoo == it.getNumVoo()){
                        duracao = it.getDuracao();
                        data = it.getData();
                        hora = it.getPartida();
                        origem = it.getOrigem();
                        destino = it.getDestino();
                        auxPass = it.getPassageiro();
                        Voo v(numVoo, data, duracao, origem, destino, auxPass, hora);
                        aux.push_back(v);
                    }
                }
            }
            Aviao aviao(matricula, tipo, capacidade, aux);
        }
    }
}
