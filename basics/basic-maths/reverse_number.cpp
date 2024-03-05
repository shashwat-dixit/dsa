#include <iostream>
#include <bits/stdc++.h>

int reverse_num_func(int n)
{
    int reverse_num = 0;

        while (n > 0)
        {
            int digit = n % 10;
            reverse_num = reverse_num * 10 + digit;
            n /= 10;
        }

    return reverse_num;
}


int main(int argc, char const *argv[])
{
    int num = 0;
    std::cout << "Enter number of digits: ";
    std::cin >> num;

    int rev_num = reverse_num_func(num);
    std::cout << "The reverse number is: " << rev_num;


    return 0;
}
