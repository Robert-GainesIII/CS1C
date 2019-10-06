
#include "Date.h"

string Date::getMonth() const{
    return month;
}

string Date::getDay() const{
    return day;
}

string Date::getYear() const{
    return year;
}


void Date::setMonth(string newMonth){
    month = newMonth;
}

void Date::setDay(string newDay){
    day =  newDay;
}

void Date::setYear(string newYear){
    year = newYear;
}


Date::Date(){
    day = "";
    month = "";
    year = "";
}

Date::Date(string day, string month, string year){
    setDay(day);
    setMonth(month);
    setYear(year);
}

void Date::print() const{
    cout<< "Year: " << year << endl;
    cout<< "Month: " << month << endl;
    cout<< "Day: " << day << endl;
}

void Date::setDate(string day, string month, string year){
    setDay(day);
    setMonth(month);
    setYear(year);
}


ostream &operator<<(ostream &out, const Date &date){
    out<< "Year: " << date.year << endl;
    out<< "Month: " << date.month << endl;
    out<< "Day: " << date.day;
    return out;
}
