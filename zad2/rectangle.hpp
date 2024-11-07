#pragma once

#include "figure.hpp"

class Rectangle : public Figure {
private:
    double m_a;
    double m_b;
protected:
    // parametrized constructor (why this one is protected?)
    Rectangle(double a, double b, const Point &p, std::string name) : Figure(p, name), m_a(a), m_b(b) {}
public:
    // parametrized constructor
    Rectangle(double a, double b, const Point &p) : Rectangle(a, b, p, "rectangle") {}
   
    //Override the area() function
    double area() const override {
        return m_a * m_b;
    }
    
    //Setters and getters for sides
    void setA(double a) {
        m_a = (a > 0) ? a : -a; //Ensure positive length
    }

    void setB(double b) {
        m_b = (b > 0) ? b : -b; //Ensure positive length
    }

    double getA() const {
        return m_a;
    }

    double getB() const {
        return m_b;
    }

    void description() const override {
        std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
        printCentre();
    }
};