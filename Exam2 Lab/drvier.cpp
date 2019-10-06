#include "A12headerfile.h" 
#include "studenttype.h"
#include "professorType.h"

int main(){

	
	int personMax = 0;//KEEPS TRACK OF NUM PERSONS USER WANTS TO CREATE
	int studentMax = 0;
	int professorMax = 0;
	int courseMax = 0;

	int personCount = 0; //KEEPS TRACK OF CURRENT NUMBER OF PERSONS IN PROGRAM
	int studentCount = 0;
	int professorCount = 0;
	int courseCount = 0;

	cout << "* * * * * * * * * * * * * * * * * * * * * * *" << endl;
	
	cout << "Enter how many people do you want to allocate: ";
	cin >> personMax;

	cout << "How many courses do you want to allocate: ";
	cin >> courseMax;

	personType **personArray == nullptr;
	personArray = new personType *[personMax];

	//personType array[arrSize];
	
	
	return 0;
}