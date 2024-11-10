#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string sentence;
    char character;
    int count = 0;

    std::cout<< "Enter sentece: ";
    std::getline(std::cin, sentence);
    std::cout << "Enter char: ";
    std::cin >> character;

    for (char &i : sentence) {
        i = std::tolower(i);
    }

    character = std::tolower(character);

    for (char i : sentence){
        if (i == character){
            ++count;
        }
    }
    std::cout << count;
}
    