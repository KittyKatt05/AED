//
// Created by ZLAmo on 30/11/2021.
//

#ifndef TRABALHO1_DATE_H
#define TRABALHO1_DATE_H

#include <string>
using namespace std;

class Date {
    int day{};
    int month{};
    int year{};
public:

    Date();
    Date(int day, int month, int year);

    string toString() const;

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    void setDay(int day, int month);
    void setMonth(int month);
    void setYear(int year);

    bool operator<(Date date) const;
    bool operator==(Date date) const;
    bool operator<=(Date date) const;
    bool operator>(Date date) const;
    bool operator>=(Date date) const;
};


#endif //TRABALHO1_DATE_H
