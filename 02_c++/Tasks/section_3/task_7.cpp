/*********************************************************
****************fill array from 10 to 10000 sequentially**
**********************************************************/
#include <iostream>
#include <array>
#include <numeric>


int main() {
    const int start = 10;
    const int end   = 10000;
    const int size  = end - start + 1; 

    std::array<int,size> arr;
    std::iota(arr.begin(), arr.end(), start);

    std::cout<<"{ ";
    for(int i : arr) {
        std::cout<< i << ", ";
    }
    std::cout<<"}";

    return 0;
}
