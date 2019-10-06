
#ifndef PROGRAMMER_CLASS_HEADER
#define PROGRAMMER_CLASS_HEADER

#include "Employee.h"

class Programmer : public Employee{
    
public:
    
    string getSupervisor() const;
    //returns month variable
    int getDepartment() const;
    //returns day variable
    double getLastSalaryIncr() const;
    //return year variable
    bool doesKnowJava() const;
    
    bool doesKnowCplusplus() const;
    
    void setSupervisor(string);
    //pre-condition: supervisor
    //post-condition: string
    void setDepartment(int);
    //pre-condition: department
    //post-condition: int
    void setLastSalaryIncr(double);
    //pre-condition: lastSalaryIncr
    //post-condition: string
    void setKnowsJava(bool);
    
    void setKnowsCplusplus(bool);
    
    Programmer();
    //          Name, ID,    Number,Title,HireDate,age,salary,gender, supervisorName, department number, salaryInc, knowsJava, knowsC++
    Programmer(string,string,string ,string,Date,int,double ,char, string , int , double , bool , bool);
    
    void print() const;
    
private:
    
    int department;
    string supervisor;
    double lastSalaryIncr;
    bool knowsJava, knowsCplusplus;
};

#endif
