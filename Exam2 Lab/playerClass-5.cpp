#include "playerClass.h"

	int personType::count = 0;
	
	personType::personType(){
		count++;
	}
	personType::personType(string a, string b){
		setFirstName(a);
		setLastName(b);
		count++;
	}
	personType::personType(string a, string b, string c, double hght, string d, char gen){
		
		newPerson(a,b,c,hght,d,gen);
		count++;
	}
	
	void personType::newPerson(string newFName, string newLastName, string newAddress, double newHeight, string newDOB, char newGender){
		fName = newFName;
		lName = newLastName;
		address = newAddress;
		height = newHeight;
		DOB = newDOB;
		gender = newGender;
	}

	void personType::setFirstName(string newFName){
		fName = newFName;
	}
		
	void personType::setLastName(string newLastName){
		lName = newLastName;
	}
		
	void personType::setAddress(string newAddress){
		address = newAddress;
	}

	void personType::setHeight(double newHeight){
		height = newHeight;
	}

	void personType::setDOB(string newDOB){
		DOB = newDOB;
	}

	void personType::setGender(char newGender){
		gender = newGender;
	}
		
	void personType::getFirstName(string &newFName){
		newFName = fName;
	}

	void personType::getLastName(string &newLastName){
		newLastName = lName;
	}

	void personType::getAddress(string &newAddress){
		newAddress = address;
	}

	void personType::getHeight(double &newHeight){
		newHeight = height;
	}

	void personType::getDOB(string &newDOB){
		newDOB = DOB;
	}

	void personType::getGender(char &newGender){
		newGender = gender;
	}
	
    int personType::getCount(){
		return count;
	}

	void personType::print(){
		
		cout << "Player Type: " << endl;
		cout << "First Name: " << fName << endl;
		cout << "Last Name: " << lName << endl;
		cout << "Address: " << address << endl;
		cout << "Player Height: " << height << endl;
		cout << "Date Of Birth: " << DOB << endl;
		cout << "Gender: " << gender << endl;
		
	}