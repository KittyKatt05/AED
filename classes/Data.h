//
// Created by ZLAmo on 30/11/2021.
//

#ifndef TRABALHO1_DATA_H
#define TRABALHO1_DATA_H

#include <string>
using namespace std;

class Data {
    int dia{};
    int mes{};
    int ano{};
public:

    Data();
    Data(int dia, int mes, int ano);

    string toString() const;

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void setDay(int dia, int mes);
    void setMonth(int mes);
    void setYear(int ano);

    //Todas as comparações de data1 consideram que maior é depois
    bool operator<(Data data1) const;
    bool operator==(Data data1) const;
    bool operator<=(Data data1) const;
    bool operator>(Data data1) const;
    bool operator>=(Data data1) const;
};


#endif //TRABALHO1_DATA_H
