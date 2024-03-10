#include <bits/stdc++.h>

/*
    Double For Loop Approach
    Time Complexity - O(n*n)
    Space Complexity - O(n)
*/

void count_frequency(int arr[], int n)
{

    std::vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] == true;
                count++;
            }
        }
        std::cout << arr[i] << " " << count << "\n";
    }
}


/*
    Map Apprach
    Time Complexity - O(n)
    Space Complexity - O(n)
*/

void count_frequency_map(int arr[], int n)
{
    std::cout << "\nMap Approach\n";
    std::unordered_map<int, int> map;

    for(int i = 0; i < n; i++) {
        map[arr[i]]++;
    }

     for (auto x : map)
        std::cout << x.first << " " << x.second << "\n"; 
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

    std::cout << "\n\n";
    count_frequency(input_arr, size);
    count_frequency_map(input_arr, size);

    return 0;
}
