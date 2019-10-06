
#include "Programmer.h"

string Programmer::getSupervisor() const{
    return supervisor;
}
//returns month variable
int Programmer::getDepartment() const{
    return department;
}
//returns day variable
double Programmer::getLastSalaryIncr() const{
    return lastSalaryIncr;
}
//return year variable
bool Programmer::doesKnowJava() const{
    return knowsJava;
}

bool Programmer::doesKnowCplusplus() const{
    return knowsCplusplus;
}

void Programmer::setSupervisor(string data){
    supervisor = data;
}
//pre-condition: supervisor
//post-condition: string
void Programmer::setDepartment(int data){
    department = data;
}
//pre-condition: department
//post-condition: int
void Programmer::setLastSalaryIncr(double data){
    lastSalaryIncr = data;
}
//pre-condition: lastSalaryIncr
//post-condition: string
void Programmer::setKnowsJava(bool data){
    knowsJava = data;
}

void Programmer::setKnowsCplusplus(bool data){
    knowsCplusplus = data;
}

Programmer::Programmer(){
    supervisor = "";
    department = 0;
    lastSalaryIncr = 0.0;
    knowsJava = false;
    knowsCplusplus = false;
}
//   day , month ,   year
Programmer::Programmer(string name,string id,string number,string title,Date date,int newAge,double newSalary,char newGender,string supervisor, int department, double                          lastSalaryIncr, bool java, bool c):Employee(name,id,number,title,date,newAge,newSalary,newGender)
{
    setSupervisor(supervisor);
    setDepartment(department);
    setLastSalaryIncr(lastSalaryIncr);
    setKnowsJava(java);
    setKnowsCplusplus(c);
}

void Programmer::print(){
    Employee::print();
    cout <<"supervisorName: " << supervisor << endl;
    cout <<"Department #: " << department << endl;
    cout <<"Last Salary Increase: " << lastSalaryIncr << endl;
    cout <<"Knows Java: " << knowsJava << endl;
    cout <<"Knows C++: " << knowsCplusplus << endl;
}
