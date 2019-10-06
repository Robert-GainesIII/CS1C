#include "studentType.h"
	
	    int studentType::globalIDCount = 0;
		double gpa = 0;
		string id = " ";
		string classification = " ";
		
        studentType::studentType(){
			globalIDCount++;
		}
        

        //fName, lName//
        studentType::studentType(string fName, string lName){
			setFirstName(fName);
			setLastName(lName);
			globalIDCount++;
		}

        // fName, lName, GPA, classification, id //
        studentType::studentType(string fName, string lName, double GPA, string classification, string id){
			setFirstName(fName);
			setLastName(lName);
			setGPA(GPA);
			setClassification(classification);
			setID(id);
			globalIDCount++;
		}
        
              
        //setters
        void studentType::setGPA(double x){
			gpa = x;
		}
		
        void studentType::setID(string x){
			id = x;
		}
		
        void studentType::setClassification(string x){
			classification = x;
		}
        
        //getters
        double studentType::getGPA(){
			return gpa;
		}
		
        string studentType::getID(){
			return id;
		}
		
        string studentType::getClassification(){
			return classification;
		}
        
        //overridden methods
        void studentType::print(){
			personType::print();
			cout << "ID: " << id << endl;
			cout << "GPA: "<< gpa << endl;
			cout << "CLASSIFICATION: "<< classification << endl;
		}
		
        bool studentType::equals(studentType student){
			return true;
		}
        
        