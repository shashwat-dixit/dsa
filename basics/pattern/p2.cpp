#include <iostream>

void print_pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
                std::cout << "*";
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