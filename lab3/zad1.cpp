#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;
    std::string faculty; // added varible faculty

    // default constructor
    Student() {
        name = "unknown";
        age = 0;
        faculty = "what?";
    }

    // parameterized constructor
    Student(std::string n, int a, std::string f) : name(n), age(a), faculty(f) {
        // body of a constructor
    }

    void introduce(void) const {
        std::cout << "I'm " << name << ", I am a "
            << age << " years old student!" << std::endl;
        std::cout << "My faculty is: " << m_faculty << std::endl;
    }

private:
    std::string m_faculty;
};

int main(){ // added main
    Student student1; // default constructor
    student1.name = "Jakub";
    student1.age = 25;
    student1.introduce();

    Student student2("Maciej", 22, "EiT"); // parameterized constructor
    student2.introduce();

    Student student3(student2); // implicit copy constructor
    student3.introduce();
}
