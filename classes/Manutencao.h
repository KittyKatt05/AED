#ifndef TRABALHO1_MAINTENANCE_H
#define TRABALHO1_MAINTENANCE_H
#include <string>

using namespace std;

#include "Data.h"

enum TipoDeServico{MANUTENCAO, LIMPEZA};

class Manutencao{
    int id;
    Data data;
    TipoDeServico tipoServico;
    string responsible;
public:
    Manutencao();
    Manutencao(int id, string responsible, Data data, TipoDeServico tipo);
    int getId();
    Data getData();
    string getResponsavel();
    TipoDeServico getTipoDeServico();
    void setId(int id);
    void setData(Data data1);
    void setResponsavel(string responsible);
    void setTipoDeServico(TipoDeServico Type_Service);
    bool operator <(const Manutencao& manutencao1);
    bool operator <=(const Manutencao& manutencao1);
    bool operator ==(const Manutencao& manutencao1);
    bool operator >(const Manutencao& manutencao1);
    bool operator >=(const Manutencao& manutencao1);

};
#endif //TRABALHO1_MAINTENANCE_H
