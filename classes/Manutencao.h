#ifndef TRABALHO1_MAINTENANCE_H
#define TRABALHO1_MAINTENANCE_H
#include <string>

using namespace std;

#include "Data.h"

enum TipoDeServico{MANUTENCAO, LIMPEZA};

class Manutencao{
    int id;
    Data data;
    TipoDeServico TypeService;
    string responsible;

public:
    Manutencao();
    Manutencao(int id, string responsible);
    int getId();
    string getResponsavel();
    TipoDeServico getTipoDeServico();
    void setId(int id);
    void setResponsavel(string responsible);
    void setTipoDeServico(TipoDeServico Type_Service);

};
#endif //TRABALHO1_MAINTENANCE_H
