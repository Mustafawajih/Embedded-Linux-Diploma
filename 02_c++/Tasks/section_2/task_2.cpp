/************************************************************************/
/*****************create a function to search to the number in the array*/
/*************************which number is taken from user****************/
/************************************************************************/

#include <iostream>

void searchNumber(int num) {
    int arr[10] = {1,2,3 ,4 ,5 ,6 ,7 ,8 ,9,10};
    bool found = false;
    for(int i = 0; i < 10; i++) {
        if(num == arr[i]) {
            std::cout<< "Number "<<  num << " is existing in array" << std::endl;
            found = true;
            break;
        }
    }
    if(!found) {
        std::cout<< "Number "<< num << " is  not existing in array" << std::endl;
    }
}

int main() {
    std::cout << "Enter the number that you want to search his: ";
    int number;
    std::cin >> number;
    searchNumber(number);
    return 0;
}


/*******Another Method ******/
/*
bool searchNumber(int num) {
    int arr[10] = {1,2,3 ,4 ,5 ,6 ,7 ,8 ,9,10};
    for(int i = 0; i < 10; i++) {
        if(num == arr[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    std::cout << "Enter the number that you want to search his: ";
    int number;
    std::cin >> number;
    
    if(searchNumber(number)) {
        std::cout<< "Number "<<  number << " is existing in array" << std::endl;
    } else {
        std::cout<< "Number "<< number << " is  not existing in array" << std::endl;
    }
    return 0;
}
*/

