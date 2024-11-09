#include <iostream>
#include <string>

//Global class
class GlobalClass {
public:
    GlobalClass() {
        std::cout << "Constructor of GlobalClass called" << "\n";
    }
    ~GlobalClass() {
        std::cout << "Destructor of GlobalClass called" << "\n";
    }
};

//Local class
class LocalClass {
public:
    LocalClass() {
        std::cout << "Constructor of LocalClass called" << "\n";
    }
    ~LocalClass() {
        std::cout << "Destructor of LocalClass called" << "\n";
    }
};


//Block class
class BlockClass {
public:
    BlockClass() {
        std::cout << "Constructor of BlockClass called" << "\n";
    }
    ~BlockClass() {
        std::cout << "Destructor of BlockClass called" << "\n";
    }
};

//Global object of GlobalClass
GlobalClass globalObject;


int main(){
    std::cout << "Entering main() function" << "\n";

    //Local class object
    LocalClass localClass;

    //Block class object
    {
        BlockClass blockClass;
    }

    std::cout << "Leaving main() function" << "\n";
}