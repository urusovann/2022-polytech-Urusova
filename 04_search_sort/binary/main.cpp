#include <iostream>
#include "binary_search.h"

int main()
{
    int arr[] = {5, 5, 7, 12, 2};
    const int arr_size = sizeof(arr) / sizeof(arr[0]);
    int x = 12;
    std::cout << search(arr, arr_size, x) << std::endl;
    return 0;
} 