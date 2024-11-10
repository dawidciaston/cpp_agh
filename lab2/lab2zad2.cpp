#include <iostream>
#include <string>
#include <algorithm>


//manual reverse
void reverseWord(std::string &userInput) {
    int length = userInput.length();
    for (int i = 0; i < length / 2; ++i) {
        std::swap(userInput[i], userInput[length - i - 1]);
    }
}

int main() {
    std::string userInput;
    std::string userInput2;

    std::cout<< "Enter word ";
    std::cin >> userInput;
    userInput2 = userInput;

    reverseWord(userInput);

    //std reverse
    std::reverse(userInput2.begin(), userInput2.end());

    std::cout << "Manual reversed: " << userInput << std::endl;
    std::cout << "std reverse: " << userInput2;

}