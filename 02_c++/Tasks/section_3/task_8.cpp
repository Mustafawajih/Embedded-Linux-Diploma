/*********************************************************
****************try and / or******************************
**********************************************************/

#include <iostream>

int main() {
    int val1 = 10;
    int val2 = 100;
    int x= 9;
    
    if(x<val1 and x<val2) {
        std::cout << "yes"<<std::endl;
    }
    if(x>val1 or x<val2) {
        std::cout << "no";
    }
    return 0;
}