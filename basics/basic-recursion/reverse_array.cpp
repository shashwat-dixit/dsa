#include <iostream>

void print_array(int ans[], int n)
{
    std::cout << "The reversed array is = \n";
    for (int i = 0; i < n; i++)
    {
        std::cout << ans[i] << "\n";
    }
}

void swap(int &arg1, int &arg2)
{
    int temp = 0;
    temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}

/*
    Using extra array
    Time Complexity - O(n)
    Space Complexity - O(n)
*/

void reverse_array(int arr[], int n)
{
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[n - i - 1] = arr[i];
    }
    print_array(output, n);
}

/*
    Using the two pointer approach
    Time Complexity - O(n)
    Space Complexity - O(1)
*/

void reverse_array_two_pointers(int arr[], int n)
{
    int p1 = 0, p2 = n - 1;
    while (p1 < p2)
    {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
    print_array(arr, n);
}

/*
    Recursive Approach
    Time Complexity - O(n)
    Space Complexity - O(1)
*/

void reverse_array_recursion(int arr[], int start, int end)
{
    int n = end;
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverse_array_recursion(arr, start+1, end-1);
    }
    
}

int main(int argc, char const *argv[])
{
    int size = 0;
    std::cout << "Enter the array size: ";
    std::cin >> size;

    std::cout << "Enter the array elements: \n";
    int inp_arr[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> inp_arr[i];
    }
    reverse_array(inp_arr, size);
    reverse_array_two_pointers(inp_arr, size);
    // reverse_array_recursion(inp_arr, 0, size-1);

    
    return 0;
}
