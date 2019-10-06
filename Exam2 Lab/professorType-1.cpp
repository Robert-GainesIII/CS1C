#include "professorType.h"

		professorType::professorType(){
			
		}
		
		
		//       (firstN, lastN)
		professorType::professorType(string firstName, string lastName)
					  :personType(firstName, lastName)
		{
			
		}
		
		
		//        (firstN, LastN,  Address, height, dob, gender, employeeID, department, degree);
		professorType::professorType(string firstName, string lastName, string address, double height, string DOB, char gender, string ID, string department, string degree)
					  :personType(firstName,lastName, address, height, DOB, gender)
		{
			setEmployeeID(ID);
			setDepartment(department);
			setDegree(degree);
		}
		
		string professorType::getEmployeeID() const{
			return employeeID;
		}
		
		string professorType::getDepartment() const{
			return department;
		}
		string professorType::getDegree() const{
			return degree;
		}
		
		void professorType::getProfessorData(string &x, string &y, string &z){
			x = employeeID; 
			y = department;
			z = degree;
		}
		
		void professorType::setEmployeeID(string str){
			employeeID = str;
		}
		void professorType::setDepartment(string str){
			department = str;
		}
		void professorType::setDegree(string str){
			degree = str;
		}
		void professorType::setProfessor(string x, string y, string z){
			
			employeeID = x;
			department = y;
			degree = z;
		}
		
		void professorType::print(){
			personType::print();
			cout << "employeeID: " << employeeID<< endl;
			cout << "department: "<< department << endl;
			cout << "degree: "<< degree << endl;
			
		}
		
		
		