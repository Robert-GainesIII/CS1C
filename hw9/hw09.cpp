#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

int main(){

    Triangle tri(3,6,9); 
    Rectangle rec(2,2,6,6); 

    printPerimeter(tri);
    printArea(tri);

    printPerimeter(rec);
    printPerimeter(tri);

    return 0; 
}