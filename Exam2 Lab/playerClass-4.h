
#ifndef PLAYER_CLASS_HEADER
#define PLAYER_CLASS_HEADER

#include <string>
#include <iostream>
using namespace std;

class personType{
	
	private:
	
	static int count;
	
	string fName = " ";
	string lName = " ";
	string address = " ";
	double height = 0.0;
	string DOB = " ";
	char gender = ' ';
	
	public: 
	
	personType();
	personType(string a, string b);
	personType(string a, string b, string c, double hght, string d, char gen);

	void newPerson(string, string, string, double, string, char);
	void setFirstName(string);
	void setLastName(string);
	void setAddress(string);
	void setHeight(double);
	void setDOB(string);
	void setGender(char);
	
	void getPerson(string &, string &, string &, double &, string &, char &);
	void getFirstName(string &);
	void getLastName(string &);
	void getAddress(string &);
	void getHeight(double &);
	void getDOB(string &);
	static int getCount();
	void getGender(char &);
	virtual void print();
	
};


#endif
