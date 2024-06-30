#include <iostream>
#include <vector>

/*
    In Bubble Sort algorithm,

        traverse from left and compare adjacent elements and the higher one is placed at right side.
        In this way, the largest element is moved to the rightmost end at first.
        This process is then continued to find the second largest and place it and so on until the data is sorted.


    Time Complexity: O(n^2)
    Auxiliary Space: O(1)

    It does not require any additional memory space.
    It is a stable sorting algorithm, meaning that elements with the same key value maintain their relative order 
    in the sorted output.
*/

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void bubble_sort(std::vector<int> &arr)
{
    bool swapped;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

/*
    Recursive Approach

    Time Complexity: O(n*n)
    Auxiliary Space: O(n)
*/
void recursiveBubbleSort(std::vector<int> &arr, int n) {
    if (n == 1)
        return;

    // One pass of bubble sort
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recur for remaining elements
    recursiveBubbleSort(arr, n - 1);
}

void arr_print(const std::vector<int> &arr)
{
    std::cout << "\nThe sorted elements of array are: \n";
    for (int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
}

int main()
{
    int size;
    std::cout << "Enter the size of the array : ";
    std::cin >> size;

    std::vector<int> arr(size);

    std::cout << "\nEnter the elements of array: \n";
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    recursiveBubbleSort(arr, size);
    arr_print(arr);

    return 0;
}
