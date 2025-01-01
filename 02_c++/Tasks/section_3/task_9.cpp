/*********************************************************
****************calculate accumulate of array*************
**********************************************************/
#include <iostream>
#include <array>
#include <numeric>


int main() {
    const int start = 1;
    const int end   = 10;
    const int size  = end - start + 1; 

    std::array<int,size> arr;
    std::iota(arr.begin(), arr.end(), start);
    int sum = std::accumulate(arr.begin(), arr.end(),0);

    std::cout << "sum = " << sum << std::endl;
    return 0;
}