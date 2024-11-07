#pragma once

#include "figure.hpp"
#define M_PI 3.14

class Circle : public Figure {
private:
    double m_radius;
public:
    //Parametrized constructor
    Circle(double radius, const Point &p) : Figure(p, "circle"), m_radius(radius) {}

    //Override the area() function
    double area() const override {
    return M_PI * m_radius * m_radius;
    }

    void description() const override {
        std::cout << "I have a radius of " << m_radius << std::endl;
        printCentre();
    }

    //Setter and getter for radius
    void setRadius(double radius) {
        if(radius >= 0){
            m_radius = radius;
        }
            
    }
    double getRadius() const {
        return m_radius;
    }
};