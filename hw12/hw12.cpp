// hw11.cpp
// to illustrate function pointers and virtual functions

/*************************************************************************
 * AUTHOR     : Robert Gaines
 * HW11       : function pointers and virtual functions
 * CLASS      : CS 1C
 * SECTION    : Mon - Thurs 3-5:20
*************************************************************************/

#include <iostream>
#include <algorithm>
#include "queueAsArray.h"

using namespace std;

int main() {
    
    queueType<int> intQ(10);
    
    cout << "Is intQ empty(it should be): " << intQ.isEmptyQueue() << endl;
    intQ.addQueue(8);
    cout << "Is intQ empty(it should not be): " << intQ.isEmptyQueue() << endl;
    cout << "Is intQ Full(it should not be): " << intQ.isFullQueue() << endl;
    for(int i = 0; i < 9; i++){
        intQ.addQueue(i);
    }
    cout << "Is intQ Full(it should be): " << intQ.isFullQueue() << endl;
    intQ.print();
    intQ.deleteQueue();
    intQ.print();

    queueType<int> intQ2(10);
    queueType<double> doubleQ(10);
    queueType<string> stringQ(10);

    string key = "Mississippi";

    //begin additions, deletions
    for(int i = 0; i < 6; i++){
        intQ2.addQueue(i);
        intQ2.print();
        doubleQ.addQueue(i*245.5632);
        doubleQ.print();
        stringQ.addQueue(key.substr(0,i));
        stringQ.print();
    }
    cout<< "DELETING NOW.. " << endl;

    for(int i = 0; i < 4; i++){
        intQ2.deleteQueue();
        intQ2.print();
        doubleQ.deleteQueue();
        doubleQ.print();
        stringQ.deleteQueue();
        stringQ.print();
    }

    cout << "ADDING NOW.. " << endl;

    for(int i = 0; i < 5; i++){
        intQ2.addQueue(i);
        intQ2.print();
        doubleQ.addQueue(i*245.5632);
        doubleQ.print();
        stringQ.addQueue(key.substr(0,i));
        stringQ.print();
    }
    cout << "DELETING NOW.. " << endl;
    for(int i = 0; i < 3; i++){
        intQ2.deleteQueue();
        intQ2.print();
        doubleQ.deleteQueue();
        doubleQ.print();
        stringQ.deleteQueue();
        stringQ.print();
    }

    cout << "The first item of the int Queue is: " << intQ2.front() << endl;
    cout << "The first item of the double Queue is: " << doubleQ.front() << endl;
    cout << "The first item of the string Queue is: " << stringQ.front() << endl;
    return 0;
}