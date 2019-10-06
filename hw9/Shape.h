#ifndef SHAPES_CLASS_HEADER
#define SHAPES_CLASS_HEADER

#include <iostream> 
#include <string> 
#include <math.h>
using namespace std;

class Shape{

    public: 
     

    private: 

    virtual void calcPerimeter() const = 0;
    virtual void calcArea() const = 0;
    //PURE VIRTUAL FUNCTIONS MAKE SHAPE AN ABSTRACT BASE CLASS


};


#endif