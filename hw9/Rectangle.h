#ifndef RECTANGLE_CLASS_HEADER
#define RECTANGLE_CLASS_HEADER

#include "Shape.h"

class Rectangle: public Shape{

    public: 

    friend void printPerimeter(const Rectangle &);
    friend void printArea(const Rectangle &);

    Rectangle(){};

    Rectangle(double l1, double l2, double w1, double w2){
        setSides(l2,l2,w1,w2);
    }

    void setSides(double, double, double, double);
    //PURE VIRTUAL FUNCTIONS MAKE SHAPE AN ABSTRACT BASE CLASS

    private: 

    virtual void calcPerimeter() const{
        cout << "Perimeter is: " << l1 + l2 + w1 + w2 << endl;
    }
    virtual void calcArea() const{
        cout <<  "Area is: " << (l1+l2) * (w1+w2) << endl;
    }
    //PURE VIRTUAL FUNCTIONS MAKE SHAPE AN ABSTRACT BASE CLASS

    double l1, l2 = 0; 
    double w1,w2 = 0;

};


void printPerimeter(const Rectangle & rec){
    rec.calcPerimeter();
}
void printArea(const Rectangle & rec){
    rec.calcArea();
}

void Rectangle::setSides(double w, double x, double y , double z){
    l1 = w;
    l2 = x; 
    w1 = y;
    w2 = z;
}

#endif