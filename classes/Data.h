//
// Created by ZLAmo on 30/11/2021.
//

#ifndef TRABALHO1_DATA_H
#define TRABALHO1_DATA_H

#include <string>
using namespace std;

class Data {
    int day{};
    int month{};
    int year{};
public:

    Data();
    Data(int day, int month, int year);

    string toString() const;

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void setDay(int day, int month);
    void setMonth(int month);
    void setYear(int year);

    bool operator<(Data date) const;
    bool operator==(Data date) const;
    bool operator<=(Data date) const;
    bool operator>(Data date) const;
    bool operator>=(Data date) const;
};


#endif //TRABALHO1_DATA_H
