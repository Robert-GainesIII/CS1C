
#ifndef PROFESSOR_CLASS_HEADER
#define PROFESSOR_CLASS_HEADER

#include "playerClass.h"

class professorType : public personType{
	
	private: 
	
	string employeeID;

    string department;

    string degree;
	
	public: 
	
	professorType();
	
	
	//       (firstN, lastN)
	professorType(string, string);
	
	
	//        (firstN, LastN,  Address, height, dob, gender, employeeID, department, degree);
	professorType(string, string, string, double, string, char, string, string, string);
	
	string getEmployeeID() const;
	string getDepartment() const;
	string getDegree() const;
	void getProfessorData(string &, string &, string &);
	
	void setEmployeeID(string);
	void setDepartment(string);
	void setDegree(string);
	void setProfessor(string, string, string);
	
	void print();
};


#endif