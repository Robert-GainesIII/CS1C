
#include "Employee.h"

void Employee::setEmployeeName(string name){
    employeeName = name;
}
void Employee::setEmoloyeeId(string id){
    employeeId = id;
}
void Employee::setPhoneNumber(string number){
    phoneNumber = number;
}
void Employee::setJobTitle(string title){
    jobTitle = title;
}
void Employee::setHireDate(Date date){
    hireDate = date;
}
void Employee::setAge(int newAge){
    age = newAge;
}
void Employee::setSalary(double newSalary){
    salary = newSalary;
}
void Employee::setGender(char gen){
    gender = gen;
}

string Employee::getEmployeeName() const{
    return employeeName;
}
string Employee::getEmoloyeeId()const{
    return employeeId;
}
string Employee::getPhoneNumber()const{
    return phoneNumber;
}
string Employee::getJobTitle()const{
    return jobTitle;
}
Date Employee::getHireDate()const{
    return hireDate;
}
int Employee::getAge()const{
    return age;
}
double Employee::getSalary()const{
    return salary;
}
char Employee::getGender()const{
    return gender;
}

Employee::Employee(){
    employeeName = " ";
    employeeId = " ";
    phoneNumber = " ";
    jobTitle = " ";
    age =0;
    salary =0.0;
    gender = ' ';
}
//Name, ID,    Number,Title,HireDate,age,salary,gender
Employee::Employee(string name,string id,string number,string title,Date date,int newAge,double newSalary,char newGender){
    employeeName = name;
    employeeId = id;
    phoneNumber = number;
    jobTitle = title;
    hireDate = date;
    age = newAge;
    salary = newSalary;
    gender = newGender;
}
void Employee::print() const{
    cout <<"employeeName: " << employeeName << endl;
    cout <<"employeeId: " << employeeId << endl;
    cout <<"phoneNumber: " << phoneNumber << endl;
    cout <<"jobTitle: " << jobTitle << endl;
    cout <<"hireDate: " << hireDate << endl;
    cout <<"age: " << age << endl;
    cout <<"salary: " << salary << endl;
    cout <<"gender: " << gender << endl;
}

bool operator ==(const Employee & lhs, const Employee &rhs){
    if(lhs.phoneNumber == rhs.getPhoneNumber())cout << "The Phone numbers are equal." << endl;
    else cout << "The Phone Numbers are not equal." << endl;
}
