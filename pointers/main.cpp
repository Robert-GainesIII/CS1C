#include <iostream>
#include <fstream>
using namespace std;

void printData(int, char, int *, char *);


int main(){
    int x = 50;
    char y = 'h';
    
    int *xPtr = nullptr;
    char *yPtr = nullptr;
    
    xPtr = &x;
    yPtr = &y;
    
    printData(x,y,xPtr,yPtr);
    
    *xPtr = 25;
    *yPtr = 'i';
    
    printData(x,y,xPtr,yPtr);
    
	return 0; 
}

void printData(int x, char y, int *xPtr, char *yPtr){
    
    system("clear");
    cout << "Value of x: " << x << " Address of x: " << &x << endl;
    cout << "Value of y: " << y << " Address of y: " << &y << endl << endl;
    
    cout << "Value of *xPtr: " << xPtr << endl << "Dereferenced Value of *xPtr: " << *xPtr << endl << "Address of xPtr: " << &xPtr << endl;
    cout << "Value of *yPtr: " << yPtr << endl << "Dereferenced Value of *yPtr: " << *yPtr << endl << "Address of yPtr: " << &yPtr << endl;
    
    cout << endl << "Press Return to continue.." << endl;
    string s;
    getline(cin,s);
    
}
