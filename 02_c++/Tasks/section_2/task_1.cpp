/***********************************************************************************/
/*****************create a function to find the maximum number of array*************/
/***********************************************************************************/
#include <iostream>

int findMax(int arr[], int size) {
    int maxNumber = arr[0];
    for(int i=1; i<size; i++) {
        if(arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}
int main() {
    int n;
    std::cout<<"Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++) {
        std::cin >> arr[i];
    }
    int maxNum = findMax(arr, n);
    std::cout << "The maximum number in the array: " << maxNum << std::endl;


    return 0;
}