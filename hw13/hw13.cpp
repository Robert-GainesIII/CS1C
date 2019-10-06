// hw13.cpp
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

    assert(intQ.isEmptyQueue());
    cout << "the queue is empty." << endl;
    
    //assert(!intQ.isEmptyQueue());
    //cout << "the queue is not empty." << endl;

    try{
      intQ.deleteQueue();
    }
    catch(std::invalid_argument){
        cout << "Exception Thrown." << endl;
    }

    try{

    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);
    intQ.addQueue(2);

    }catch(std::invalid_argument){
        
    }

    return 0;
}