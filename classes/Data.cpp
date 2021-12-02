//
// Created by ZLAmo on 30/11/2021.
//

#include "Data.h"

int max (int a, int b){
    if (a>b) return(a) ; else return (b);
}

int min (int a, int b){
    if (a>b) return(b); else return (a);
}

Data::Data() {
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

Data::Data(int day, int month, int year) {
    this->setDay(day,month);
    this->setMonth(month);
    this->setYear(year);
}

string Data::toString() const {
    string date;
    date += std::to_string(this->day) + "/";
    date += std::to_string(this->month) + "/";
    date += std::to_string(this->year);
    return date;
}

int Data::getDay() const {
    return this->day;
}

int Data::getMonth() const {
    return this->month;
}

int Data::getYear() const {
    return this->year;
}

bool Data::operator<(Data date) const {
    if (this->year >= date.year) { return false; }
    else if (this->month >= date.month) { return false;}
    else if (this->day >= date.day) { return false; }
    return true;
}

bool Data::operator==(Data date) const {
    return (this->day == date.day and
    this->month == date.month and
    this->year == date.year);
}

bool Data::operator<=(Data date) const {
    return this->operator==(date) or this->operator<(date);
}

bool Data::operator>(Data date) const {
    return not(this->operator<=(date));
}

bool Data::operator>=(Data date) const {
    return this->operator>(date) or this->operator==(date);
}

void Data::setMonth(int month) {
    this->month = min(month,12);
}

void Data::setYear(int year) {
    this->year = max(1,year);
}

void Data::setDay(int day,int month) {
    static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    this->day = max(1,day);
    this->day = min(day,length[month]);
}
