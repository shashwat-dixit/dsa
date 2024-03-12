#include <iostream>
#include <vector>

int binary_search(const std::vector<int>& arr, int l, int r, int target) {
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == target)
            return m;
        if (arr[m] < target)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::vector<int> arr(size);

    std::cout << "\nEnter the elements of the array: \n";
    for (int i = 0; i < size; i++) // Corrected loop condition
        std::cin >> arr[i];

    int target;
    std::cout << "Enter the target value: \n";
    std::cin >> target;

    int index = binary_search(arr, 0, size, target);
    std::cout << "The index of the target value is: " << index;

    return 0;
}
