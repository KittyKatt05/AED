#include "Manutencao.h"

using namespace std;

Manutencao::Manutencao() {
    id = 'null';
    responsible = 'null';
}

Manutencao::Manutencao(int id, string responsible, Data data, TipoDeServico tipo) {
    this-> id = id;
    this-> responsible = responsible;
    this->data = data;
    this->tipoServico = tipo;
}

int Manutencao::getId() {
    return this-> id;
}

string Manutencao::getResponsavel() {
    return this->responsible;
}

TipoDeServico Manutencao::getTipoDeServico() {
    return this-> tipoServico;
}

void Manutencao::setId(int id) {
    this-> id = id;
}

void Manutencao::setResponsavel(string responsible) {
    this-> responsible = responsible;
}

void Manutencao::setTipoDeServico(TipoDeServico Type_Service) {
    this-> tipoServico = Type_Service;
}

string Manutencao::tipoToString() {
    if(this->tipoServico == MANUTENCAO){
        return "Manutenção";
    }else{
        return "Limpeza";
    }
}

string Manutencao::manutencaoToString() {
    string result;
    result.append("Id: ").append(to_string(this->id)).append("\nData: ").append(this->data.toString()).append("\nResponsável: ");
    result.append(this->responsible).append("\nTipo do serviço: ").append(this->tipoToString());
    return result;
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

Data Manutencao::getData() {
    return this->data;
}

void Manutencao::setData(Data data1) {
    this->data = data1;
}

