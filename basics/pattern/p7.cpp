#include <iostream>

void print_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            std::cout << " ";
        for (int k = 0; k < 2 * i + 1; k++)
            std::cout << "*";
        for (int j = 0; j < n - i - 1; j++)
            std::cout << " ";
        std::cout << "\n";
    }
}

int main()
{
    int num = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;
    print_pattern(num);
    return 0;
}