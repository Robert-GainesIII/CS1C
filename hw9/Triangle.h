#ifndef TRIANGLE_CLASS_HEADER
#define TRIANGLE_CLASS_HEADER

#include "Shape.h"

class Triangle: public Shape{

    public: 

    friend void printPerimeter(const Triangle &);
    friend void printArea(const Triangle &);

    Triangle(){};

    Triangle(double s1, double s2,double s3){
        setSides(s1,s2,s3);
    }

    void setSides(double, double, double);
    //PURE VIRTUAL FUNCTIONS MAKE SHAPE AN ABSTRACT BASE CLASS

    private: 

    virtual void calcPerimeter() const{
        cout << "Perimeter is: "<< s1+s2+s3 << endl;
    }
    
    virtual void calcArea() const{
        double p = (s1+s2+s3)/2;
        cout << "Area is: " << sqrt(p * (p-s1) *(p-s2) * (p-s3) );
    }

    double s1,s2,s3 = 0;


};
//END OF TRIANGLE CLASS--------------------------------------------//

//FUNCTION IMPLEMENTATIONS
//========================//

void printPerimeter(const Triangle & tri){
    tri.calcPerimeter();
}

void printArea(const Triangle & tri){
    tri.calcArea();
}

void Triangle::setSides(double x, double y, double z){
    s1 = x;
    s2 = y;
    s3 = z;
}

#endif