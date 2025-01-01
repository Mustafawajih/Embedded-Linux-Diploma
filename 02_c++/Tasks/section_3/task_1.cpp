/******************************************************
****************check if the character is digit********
*******************************************************/

#include <iostream>
#include <cctype>

class CharacterChecker {
public:
    bool isDigit(char num) {
            return isdigit(num);
    }    
};

int main() {
    CharacterChecker checker;

    char inputchar;
    std::cout << "Enter the character: ";
    std::cin >> inputchar;

    if(checker.isDigit(inputchar)){
        std::cout << inputchar << " is digit" <<std::endl;
    } else {
        std::cout << inputchar << " is not digit" <<std::endl;
    }
    return 0;
}


