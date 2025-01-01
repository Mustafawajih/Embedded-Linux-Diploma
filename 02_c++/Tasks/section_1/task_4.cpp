/***********************************************************/
/*****************decide the letter is vowel or not*********/
/***********************************************************/
#include<iostream>

int main() {

    char letter;
    std::cout << "Enter letter"<<std::endl;
    std::cin >> letter;

    letter = tolower(letter);

    if (letter == 'a' || letter == 'o' || letter == 'i' || letter == 'e' || letter == 'u') {
        std::cout << letter << " is a vowel"<<std::endl;
    } else {
        std::cout << letter << " is not a vowel"<<std::endl;
    }
     return 0;

}