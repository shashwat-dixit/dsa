#include <bits/stdc++.h>

int linear_search(std::vector<int>arr, int target) {


}

int main(int argc, char const *argv[])
{
    int size;
    std::cout  << "Enter the size of array: \n";
    std::cin >> size;

    std::vector<int> arr (size);

    std::cout << "Enter the elements of array-\n";

    for (int x = 0; x < size; x++) {
        int c;
        std::cin >> c;
        arr.push_back(c);
    }

    std::cout << "Enter the target element: \n";
    int target;
    std::cin >> target;

    
    return 0;
}
