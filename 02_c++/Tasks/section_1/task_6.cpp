#include <iostream>
#include <string>

int main() {

    int num;
    std::cout <<"Enter an integer: ";
    std::cin >> num;

    std::string numStr = std::to_string(abs(num));

    int sum = 0;
    for(char digitChar : numStr) {

        sum += digitChar - '0'; 
    } 

    std::cout <<"sum of the digits: " << sum << std::endl;

    return 0;

}