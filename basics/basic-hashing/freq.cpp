#include <bits/stdc++.h>


void frequency_high_low(int arr[], int n)
{
    int max_freq = 1, min_freq = n;
    int max_element = arr[0], min_element = arr[0]; // Initialize with first element
    std::cout << "\nMap Approach\n";
    std::unordered_map<int, int> map;

    for(int i = 0; i < n; i++) {
        map[arr[i]]++;
    }

    for(auto x : map) {
        if(x.second < min_freq) {
            min_freq = x.second; // Update min_freq
            min_element = x.first; // Update min_element
        }
        if(x.second > max_freq) {
            max_freq = x.second; // Update max_freq
            max_element = x.first; // Update max_element
        }
    }

    std::cout << "\nThe element with lowest frequency is: " << min_element << " with a frequncy of: " 
    << min_freq;
    std::cout << "\nThe element with highest frequency is: " << max_element << " with a frequncy of: " 
    << max_freq;
}

int main(int argc, char const *argv[])
{
    int size;
    std::cout << "Enter the size of the array: \n";
    std::cin >> size;

    std::cout << "Enter the array elements: \n";

    int input_arr[size];
    for (int i = 0; i < size; i++)
        std::cin >> input_arr[i];

    frequency_high_low(input_arr, size);

    return 0;
}
