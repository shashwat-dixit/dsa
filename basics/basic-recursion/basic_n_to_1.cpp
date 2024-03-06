#include<iostream>

void print_recursively (int i, int n) {
    if(i<n)
        return;

    std::cout << i <<"\n";
    print_recursively(i-1, n);
}

int main(int argc, char const *argv[])
{
    int small_num, big_num;
    std:: cout << "Enter the numbers\n";
    std::cin>> small_num>> big_num;
    print_recursively(big_num, 1);

    return 0;
}
