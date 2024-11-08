#include <iostream>
#include "ComplexNumber.hpp"

int main() {
    ComplexNumber c1(4.0, 5.0);
    ComplexNumber c2(3.0, -2.0);
    double someNumber = 13.3;

    std::cout << "c1: " << c1 << "\n";
    std::cout << "c2: " << c2 << "\n";

    std::cout << "c1 + c2: " << (c1 + c2) << "\n";
    c1 += c2;
    std::cout << "c1 += c2: " << c1 << "\n";

    std::cout << "c1 + someNumber: " << (c1 + someNumber) << "\n";
    c1 += someNumber;
    std::cout << "c1 += someNumber: " << c1 << "\n";

    std::cout << "c1 - c2: " << (c1 - c2) << "\n";
    c1 -= c2;
    std::cout << "c1 -= c2: " << c1 << "\n";

    std::cout << "c1 - someNumber: " << (c1 - someNumber) << "\n";
    c1 -= someNumber;
    std::cout << "c1 -= someNumber: " << c1 << "\n";

    return 0;
}