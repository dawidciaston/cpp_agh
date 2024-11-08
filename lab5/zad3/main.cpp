#include <iostream>
#include "ComplexNumber.hpp"

int main() {
    //double type
    dc::jpo::ComplexNumber<double> c1(4.1, 5.0);
    dc::jpo::ComplexNumber<double> c2(3.2, -2.0);

    std::cout << "c1: " << c1 << "\n";
    std::cout << "c2: " << c2 << "\n";
    std::cout << "c1 + c2: " << (c1 + c2) << "\n";
    c1 += c2;
    std::cout << "c1 += c2: " << c1 << "\n";

    //int type
    dc::jpo::ComplexNumber<int> c3(2, 3);
    dc::jpo::ComplexNumber<int> c4(1, -1);

    std::cout << "c3: " << c3 << "\n";
    std::cout << "c4: " << c4 << "\n";
    std::cout << "c3 + c4: " << (c3 + c4) << "\n";
    
    c3 += c4;
    std::cout << "c3 += c4: " << c3 << "\n";

    //float type
    dc::jpo::ComplexNumber<float> c5(1.5, -2.5);
    dc::jpo::ComplexNumber<float> c6(3.2, 4.0);

    std::cout << "c5: " << c5 << "\n";
    std::cout << "c6: " << c6 << "\n";
    std::cout << "c5 * c6: " << (c5 * c6) << "\n";

    c5 *= c6;
    std::cout << "c5 *= c6: " << c5 << "\n";

    return 0;
}
