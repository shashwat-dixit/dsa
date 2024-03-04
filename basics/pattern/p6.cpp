#include <iostream>

void print_pattern(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
                std::cout << j;
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