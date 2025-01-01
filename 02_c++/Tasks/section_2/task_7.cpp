/***********************************************************************************/
/*****************Use lambda functions to sort an array of integers*****************/
/************************in ascending and descending order.*************************/
/***********************************************************************************/

#include <iostream>
#include <algorithm>


int main() {

    int arr[] = {2,4,6,8,3,9,10,7,5};
    int size = sizeof(arr)/sizeof(arr[0]);


    auto ascending = [](int a, int b) {
        return a < b;
    };

    auto descending = [](int a, int b) {
        return a > b;
    };

    std::sort(arr, arr+size, ascending);
    std::cout << "Array sorted in ascending order: ";

    for(int value : arr) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    std::sort(arr, arr+size, descending);
    std::cout << "Array sorted in descending order: ";
    for(int value : arr) {
        std::cout << value << " ";
    }
    
    return 0;
}