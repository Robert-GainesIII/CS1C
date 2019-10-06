//Program to test various operations on a doubly linked list
  
#include <iostream>
#include "doublyLinkedList.h"  
 
using namespace std;  

int main()
{
	doublyLinkedList<int> intL; 
	for(int i= 0; i<10; i++){
		intL.insert(i);
	}
	intL.print();

	//doublyLinkedList<int> copiedList;
	//copiedList = intL;
	//copiedList.print();


	doublyLinkedList<double> doubleL;
	for(int i= 0; i<10; i++){
		doubleL.insert(i*46.567);
	}

	doubleL.print();

	doubleL.deleteNode(46.567);

	doubleL.print();

	doubleL.reversePrint();
}
