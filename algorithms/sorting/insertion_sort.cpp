#include <iostream>
#include <vector>

/*
Time Complexity of Insertion Sort

    The worst-case time complexity of the Insertion sort is O(N^2)
    The average case time complexity of the Insertion sort is O(N^2)
    The time complexity of the best case is O(N).

The auxiliary space complexity of Insertion Sort is O(1)
*/

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void insertion_sort(std::vector<int> &arr)
{
    
}

void arr_print(const std::vector<int> &arr)
{
    std::cout << "\nThe sorted elements of array are: \n";
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
}
