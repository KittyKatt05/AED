//
// Created by ZLAmo on 30/11/2021.
//

#include "Date.h"

int max (int a, int b){
    if (a>b) return(a) ; else return (b);
}

int min (int a, int b){
    if (a>b) return(b); else return (a);
}

Date::Date() {
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

Date::Date(int day, int month, int year) {
    this->setDay(day,month);
    this->setMonth(month);
    this->setYear(year);
}

string Date::toString() const {
    string date;
    date += std::to_string(this->day) + "/";
    date += std::to_string(this->month) + "/";
    date += std::to_string(this->year);
    return date;
}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

bool Date::operator<(Date date) const {
    if (this->year >= date.year) { return false; }
    else if (this->month >= date.month) { return false;}
    else if (this->day >= date.day) { return false; }
    return true;
}

bool Date::operator==(Date date) const {
    return (this->day == date.day and
    this->month == date.month and
    this->year == date.year);
}

bool Date::operator<=(Date date) const {
    return this->operator==(date) or this->operator<(date);
}

bool Date::operator>(Date date) const {
    return not(this->operator<=(date));
}

bool Date::operator>=(Date date) const {
    return this->operator>(date) or this->operator==(date);
}

void Date::setMonth(int month) {
    this->month = min(month,12);
}

void Date::setYear(int year) {
    this->year = max(1,year);
}

void Date::setDay(int day,int month) {
    static int length[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    this->day = max(1,day);
    this->day = min(day,length[month]);
}
