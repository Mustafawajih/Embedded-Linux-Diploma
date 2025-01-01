/***********************************************************************************/
/****************************delete number in array*********************************/
/***********************************************************************************/

#include <iostream>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArray[]) {

        for(int i=0; i<size1; i++) {
            mergedArray[i] = arr1[i];
        }
        for(int i=0; i<size2; i++) {
            mergedArray[size1 + i] = arr2[i];
        }
}

int main() {

    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {11,12,13,14,15,16,17,18,19,20};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedsize = size1 + size2;
    int mergedArray[mergedsize];

    mergeArrays(arr1,size1,arr2,size2,mergedArray);

    std::cout<< "The Merged Array: ";
        for(int i=0; i<mergedsize; i++) {
            std::cout<< mergedArray[i]<< " ";
        }

    return 0;
}