#include <iostream>

void print_pattern(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
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