#include <iostream>
#include <string>

class Student {
private:
    std::string m_name;
    int m_age;

public:
    //Setter for age with validation
    void setAge(int a) {
        if (a>=0){
            m_age = a;
        }
        else{
            std::cout << "Invalid age. ";
        }
    }
    int getAge() const {
        return m_age;
    }

    //Setter for name with validation
    void setName(std::string n) {
        if(!n.empty()){
            m_name = n;
        }
        else{
            std::cout << "Invalid name. ";
        }
        
    }
    std::string getName() const {
        return m_name;
    }
};

int main(){ 
    Student student;
    
    //Test with valid data
    student.setName("Dawid");
    student.setAge(22);
    std::cout << student.getName() << " " << student.getAge() << "\n";

    //Invalid data also showing previous valid data
    student.setName("");
    student.setAge(-5);
    std::cout << student.getName() << " " << student.getAge() << "\n";
}