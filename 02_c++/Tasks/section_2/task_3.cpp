/***********************************************************************************/
/****************************delete number in array*********************************/
/***********************************************************************************/

#include <iostream>

void deleteNumber(int arr[], int &size, int num) {
    int pos = -1;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;

        std::cout << "Number " << num << " deleted from the array." << std::endl;
    } else {
        std::cout << "Number " << num << " not found in the array." << std::endl;
    }
}

void printArray(int arr[], int size) {
    std::cout << "Current array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10; 

    printArray(arr, size);
    
    int number;
    std::cout << "Enter the number you want to delete: ";
    std::cin >> number;
    
    deleteNumber(arr, size, number);
    printArray(arr, size);
    
    return 0;
}
