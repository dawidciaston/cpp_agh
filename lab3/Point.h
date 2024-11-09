#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point{
    private:
        double x;
        double y;
    public:
    //Parametric constructor
        Point(double x_val, double y_val) : x(x_val), y(y_val) {}
    //Setters for x and y
    void setX(double x_val){
        x = x_val;
    }
    void setY(double y_val){
        y = y_val;
    }

    //Getters for x and y
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    //showing x and y
    void display() const {
        std::cout << "(" << x << ", " << y << ")" << "\n";
    }
};

#endif // POINT_H