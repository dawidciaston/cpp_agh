#include <iostream>
#include <string>
#include <algorithm>

bool isPalidromeManual(const std::string &userInput){
    int length = userInput.length();
    for (int i = 0; i < length / 2; ++i) {
        if (userInput[i] != userInput[length - i - 1]) {
            return false;
        }
    }
    return true;
}
bool isPalidromeStd(const std::string &userInput2){
    std::string reversedString = userInput2;
    std::reverse(reversedString.begin(), reversedString.end());
    return userInput2 == reversedString;
}

int main(){
    std::string userInput;
    std::string userInput2;

    std::cout<< "Enter word ";
    std::cin >> userInput;
    userInput2 = userInput;

    if(isPalidromeManual(userInput)){
        std::cout<<"Word is a Palidrome (manual)" << std::endl;
    }
    else{
        std::cout<<"Word is not a Palidrome (manual)" << std::endl;
    }

    if(isPalidromeManual(userInput)){
        std::cout<<"Word is a Palidrome (std)" << std::endl;
    }
    else{
        std::cout<<"Word is not a Palidrome (std)" << std::endl;
    }
    
}