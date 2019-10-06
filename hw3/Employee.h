
#ifndef EMPLOYEE_CLASS_HEADER
#define EMPLOYEE_CLASS_HEADER

#include "Date.h"
#include <string>
#include <iostream>
using namespace std;


class Employee{
    
    friend bool operator ==(const Employee &, const Employee &);
    
public:
    
    void setEmployeeName(string);
    void setEmoloyeeId(string);
    void setPhoneNumber(string);
    void setJobTitle(string);
    void setHireDate(Date);
    void setAge(int);
    void setSalary(double);
    void setGender(char);
    
    string getEmployeeName() const;
    string getEmoloyeeId()const;
    string getPhoneNumber()const;
    string getJobTitle()const;
    Date getHireDate()const;
    int getAge()const;
    double getSalary()const;
    char getGender()const;
   
    Employee();
            //Name, ID,    Number,Title,HireDate,age,salary,gender
    Employee(string,string,string,string,Date,int,double,char);
    
    virtual void print() const;
    
private:
    
    string employeeName;
    string employeeId;
    string phoneNumber;
    string jobTitle;
    Date hireDate;
    int age;
    double salary;
    char gender;
};

#endif
