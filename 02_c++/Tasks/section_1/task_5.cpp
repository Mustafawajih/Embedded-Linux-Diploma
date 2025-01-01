/***********************************************************/
/*****************multiplication table**********************/
/***********************************************************/

#include <iostream>
#include <iomanip>

int main() {

    int num;

    std::cout << "Enter multiplication table: ";
    std::cin >> num;

    for (int i=1; i<=10; i++) {

        std::cout <<std::setw(10) <<  num << " x " << i << " = " << num * i << std::endl;
    }
    return 0;
}