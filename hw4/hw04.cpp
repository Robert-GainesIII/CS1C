#include <iostream>

#include "Employee.h"
#include "Programmer.h"
#include "SoftwareArchitect.h"


int main(){
    
    Employee defaultConstructorEmployee;
    Date hireDate("11", "6", "2019");
    Employee customConstructorEmployee("EmployeeJoe", "2324-34-224", "949-611-0987", "Janitor",hireDate, 27, 36000,'M');
                                    //Name, ID,    Number,Title,HireDate,age,salary,gender
    
    
    Programmer defaultConstructorProgrammer;
    hireDate.setDate("20","2","1980");
    Programmer customConstructorProgrammer("Tom Jones", "2123-34-435", "949-611-0987", "Janitor",hireDate, 37, 67000,'M', "Bob Smith", 256, 2.4, true, false);
    
    SoftwareArchitect defaultConstructorSoftwareArchitect;
    SoftwareArchitect customConstructorSoftwareArchitect("sally Smith", "2345-54-924", "949-092-2387", "Janitor",hireDate, 35, 120000,'F', "Jeff Bezos", 312, 7.4, 12);
    
    
    
    cout<<"================================" << endl;
    defaultConstructorEmployee.print();
    cout<<"================================" << endl;
    customConstructorEmployee.print();
    cout<<"================================" << endl;
    
    defaultConstructorProgrammer.print();
    cout<<"================================" << endl;
    customConstructorProgrammer.print();
    cout<<"================================" << endl;
    
    defaultConstructorSoftwareArchitect.print();
    cout<<"================================" << endl;
    customConstructorSoftwareArchitect.print();
    cout<<"================================" << endl;
    
    bool equal1 = arePhonesEqual(customConstructorEmployee,customConstructorProgrammer);
    defaultConstructorEmployee.setPhoneNumber("949-234-2324");
    bool equal2 = customConstructorEmployee == defaultConstructorEmployee;
    defaultConstructorEmployee.setPhoneNumber("949-611-0987");
    bool equal3 = customConstructorEmployee == defaultConstructorEmployee;

    
    return 0;
}
