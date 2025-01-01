/***********************************************************/
/*****************Create a table for AscII code*************/
/***********************************************************/

#include <iostream>
#include <iomanip>


int main() {

    std::cout << "ASCII Code table:" << std::endl;
    std::cout << "+-------+--------+" << std::endl;
    std::cout << "|  Char | ASCII  |" << std::endl;
    std::cout << "+-------+--------+" << std::endl;

    for (int i = 0; i <=127; i++) {

        std::cout <<"|"
                  <<std::setw(5)<<char(i)
                  <<std::setw(5)<<"|"
                  <<std::setw(5)<< i 
                  <<std::setw(5)<<"|"
                  << std::endl;

    }

return 0;
}




