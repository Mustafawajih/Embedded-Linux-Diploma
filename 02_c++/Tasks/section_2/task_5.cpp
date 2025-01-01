/***********************************************************************************/
/*****************find the even and odd numbers in the array************************/
/***********************************************************************************/


#include <iostream>

void findEvenOddNumbers(int arr[], int size) {
    std::cout << "Even numbers: ";
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
    std::cout << "Odd numbers: ";
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            std::cout << arr[i] << " ";
        }
    }

}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 , 16, 17, 18, 19, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    findEvenOddNumbers(arr,size);
    return 0;
}