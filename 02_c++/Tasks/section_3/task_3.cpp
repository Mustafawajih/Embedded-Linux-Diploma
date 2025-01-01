/********************************************************************
****************check if there is any value of array is even*********
********************************************************************/

#include <iostream>

class ArrayChecker {
public:
    ArrayChecker() {}
    bool allEven(int arr[], int size) {
        for(int i=0; i<size; i++) {
            if(arr[i]%2 == 0) {
                return true;
            }
        }
        return false;
    }
    ~ArrayChecker() {}
};

int main() {
    int arr[] = {1,3,5,7,9,12};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArrayChecker checker;
    if(checker.allEven(arr, size)) {
        std::cout << "There is at least one even number in the array." << std::endl;
    } else {
        std::cout << "No even numbers found in the array." << std::endl;
    }
    return 0;
}