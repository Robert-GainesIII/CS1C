
#ifndef STUDENT_CLASS_HEADER
#define STUDENT_CLASS_HEADER
#include "playerClass.h"
	class studentType : public personType{
    public:
        //constructors
        studentType();
        

        //       fName, lName//
        studentType(string, string);

              // fName, lName, GPA, classification, id //
        studentType(string, string, double, string, string);
        
              
        //setters
        void setGPA(double);
        void setID(string);
        void setClassification(string);
        
        //getters
        double getGPA();
        string getID();
        string getClassification();
        
        //overridden methods
        void print() ; //override the parents' print method
        bool equals(studentType);
        
		private:
		
		static int globalIDCount;
        string id; //added every id 'should' be unique
        double gpa;
        string classification;
        
};


#endif 
