
#ifndef SOFTWARE_ARCHITECT_CLASS_HEADER
#define SOFTWARE_ARCHITECT_CLASS_HEADER

#include "Employee.h"

class SoftwareArchitect : public Employee{
    
public:
    
    string getSupervisor() const;
    //returns month variable
    int getDepartment() const;
    //returns day variable
    double getLastSalaryIncr() const;
    //return year variable
    int getYearsOfExp()const;
    
    void setSupervisor(string);
    //pre-condition: supervisor
    //post-condition: string
    void setDepartment(int);
    //pre-condition: department
    //post-condition: int
    void setLastSalaryIncr(double);
    //pre-condition: lastSalaryIncr
    //post-condition: string
    void setYearsOfExp(int);
    
    SoftwareArchitect();
    //          Name, ID,    Number,Title,HireDate,age,salary,gender, supervisorName, department number, salaryInc, years of exp
    SoftwareArchitect(string,string,string ,string,Date,int,double ,char, string , int , double ,int);
    
    void print();
    
private:
    
    int department;
    string supervisor;
    double lastSalaryIncr;
    int yearsOfExp;
};

#endif
