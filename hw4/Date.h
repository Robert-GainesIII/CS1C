
#ifndef DATE_CLASS_HEADER
#define DATE_CLASS_HEADER

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Date{
    
    friend ostream &operator<<(ostream &out, const Date &date);
    
public:
    
    string getMonth() const;
    //returns month variable
    string getDay() const;
    //returns day variable
    string getYear() const;
    //return year variable
    
    void setMonth(string);
    //pre-condition: month
    //post-condition: string
    void setDay(string);
    //pre-condition: day
    //post-condition: string
    void setYear(string);
    //pre-condition: year
    //post-condition: string
    void setDate(string, string, string);
    
    Date();
    //   day , month ,   year
    Date(string, string, string);
    
    void print() const;
    
private:
    
    string month;
    string day;
    string year;
};

#endif
