#include <iostream>

class Animal{
    public:
        virtual void makeSound() = 0;  
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << "\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow!" << "\n";
    }
};


Animal* chooseAnimal(int number) {
    if (number % 2 == 0) {
        return new Dog(); //Return a new Dog object if the number is even
    } else {
        return new Cat(); //Return a new Cat object if the number is odd
    }
}

int main() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    Animal *animal = chooseAnimal(x);
    animal->makeSound();

    delete animal; //Properly free dynamically allocated object

    return 0;
}