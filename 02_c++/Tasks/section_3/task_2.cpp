/******************************************************
****************check if all the array is even*********
*******************************************************/

#include <iostream>

class ArrayChecker {
public:
    ArrayChecker() {}
    bool allEven(int arr[], int size) {
        for(int i=0; i<size; i++) {
            if(arr[i]%2 != 0) {
                return false;
            }
        }
        return true;
    }
    ~ArrayChecker() {}
};

int main() {
    int arr[] = {2,4,6,8,10,12,14};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArrayChecker checker;
    if(checker.allEven(arr, size)) {
        std::cout << "All elements are even." << std::endl;
    } else {
        std::cout << "Not all elements are even." << std::endl;
    }
    return 0;
}