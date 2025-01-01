/***********************************************************************************/
/*****************Write a lambda function to calculate the square of a given number*/
/***********************************************************************************/

#include <iostream>

int main() {
    auto square =[](int x){
        return x*x;
    };

    int number;
    std::cout<< "Enter a number: ";
    std::cin >> number;

    std::cout<< "the square of " << number << " is " << square(number) << std::endl;

    return 0;
}

