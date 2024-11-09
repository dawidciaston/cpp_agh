#include <iostream>
#include "Point.h"

class Circle {
    private:
        double *radius;
        Point center;
    public:
        //parametric constructor for all private pool
        Circle(double r, double x, double y) : center(x, y) {
            radius = new double;
            *radius = r;
        }
        //setters
        void setRadius(double r){
            *radius = r;
        }
        void setCenter(double x, double y) {
            center.setX(x);
            center.setY(y);
        }
        //getters
        double getRadius() const {
            return *radius;
        }
        Point getCenter() const {
            return center;
        }

        //count circle area
        double area() const {
            return 3.14 * (*radius) * (*radius);
        }
        
        //deconstructor
        ~Circle() {
            delete radius;  // Zwalnianie pamięci dla promienia
        }

        //showing infrmation about a circle
        void display() const {
            std::cout << "Circle with radius " << *radius << " and center ";
            center.display();
            std::cout << "Area: " << area() << std::endl;
        }
};