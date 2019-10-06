
#include "SoftwareArchitect.h"

string SoftwareArchitect::getSupervisor() const{
    return supervisor;
}
//returns month variable
int SoftwareArchitect::getDepartment() const{
    return department;
}
//returns day variable
double SoftwareArchitect::getLastSalaryIncr() const{
    return lastSalaryIncr;
}
//return year variable
int SoftwareArchitect::getYearsOfExp()const {
    return yearsOfExp;
}

void SoftwareArchitect::setSupervisor(string data){
    supervisor = data;
}
//pre-condition: supervisor
//post-condition: string
void SoftwareArchitect::setDepartment(int data){
    department = data;
}
//pre-condition: department
//post-condition: int
void SoftwareArchitect::setLastSalaryIncr(double data){
    lastSalaryIncr = data;
}
//pre-condition: lastSalaryIncr
//post-condition: string
void SoftwareArchitect::setYearsOfExp(int data){
    yearsOfExp = data;
}

SoftwareArchitect::SoftwareArchitect(){
    supervisor = "";
    department = 0;
    lastSalaryIncr = 0.0;
    yearsOfExp = 0;
}

SoftwareArchitect::SoftwareArchitect(string name,string id,string number,string title,Date date,int newAge,double newSalary,char newGender,string supervisor, int department, double                          lastSalaryIncr, int exp):Employee(name,id,number,title,date,newAge,newSalary,newGender)
{
    setSupervisor(supervisor);
    setDepartment(department);
    setLastSalaryIncr(lastSalaryIncr);
    setYearsOfExp(exp);
}

void SoftwareArchitect::print() const {
    Employee::print();
    cout <<"supervisorName: " << supervisor << endl;
    cout <<"Department #: " << department << endl;
    cout <<"Last Salary Increase: " << lastSalaryIncr << endl;
    cout <<"Years of experiance: " << yearsOfExp << endl;
}
