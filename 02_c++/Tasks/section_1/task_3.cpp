/***********************************************************/
/*****************RIGHT angle triangle**********************/
/***********************************************************/

#include<iostream>

int main() {
    
    int ang1=0; 
    int ang2=0; 
    int ang3=0;

    std::cout << "Enter three angles" << std::endl;
    std::cin >> ang1 >> ang2 >> ang3;

    if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
        if ((ang1 + ang2 + ang3) == 180) {
            std::cout << "Right Angle triangle" << std::endl;
        } else {
        std::cout << "Not triangle" << std::endl;
        }
    } else {
        std::cout << "Not Right Angle triangle" << std::endl;
    }

    return 0;
}