#include <iostream>
#include "Point.h"
#include "Circle.h"

int main() {
    // //creating object of class
    // Point p1(3.5, 4.5);

    // //showing coordinates
    // p1.display();

    // //changing coordinates by setters
    // p1.setX(7.0);
    // p1.setY(8.0);

    // //showing changed coordinates
    // p1.display();

    // //showing coordinates with gettings
    // std::cout << p1.getX() << ", " << p1.getY();
    // return 0;

    //creating class object 
    Circle c1(5.0, 3.0, 4.0);

    //showing information about circle
    c1.display();

    //changing x y and r
    c1.setRadius(7.0);
    c1.setCenter(1.0, 2.0);

    //showing new information about circle
    c1.display();
    
}