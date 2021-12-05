#include "Manutencao.h"

using namespace std;

Manutencao::Manutencao() {
    id = 'null';
    responsible = 'null';
}

Manutencao::Manutencao(int id, string responsible) {
    this-> id = id;
    this-> responsible = responsible;
}

int Manutencao::getId() {
    return this-> id;
}

string Manutencao::getResponsavel() {
    return this->responsible;
}

TipoDeServico Manutencao::getTipoDeServico() {
    return this-> TypeService;
}

void Manutencao::setId(int id) {
    this-> id = id;
}

void Manutencao::setResponsavel(string responsible) {
    this-> responsible = responsible;
}

void Manutencao::setTipoDeServico(TipoDeServico Type_Service) {
    this-> TypeService = Type_Service;
}

bool Manutencao::operator<(const Manutencao& manutencao1) {
    return this->data.operator<(manutencao1.data);
}

bool Manutencao::operator<=(const Manutencao& manutencao1) {
    return this->data.operator<=(manutencao1.data);
}

bool Manutencao::operator==(const Manutencao& manutencao1) {
    return this->data.operator==(manutencao1.data);
}

bool Manutencao::operator>(const Manutencao& manutencao1) {
    return this->data.operator>(manutencao1.data);
}

bool Manutencao::operator>=(const Manutencao& manutencao1) {
    return this->data.operator>=(manutencao1.data);
}