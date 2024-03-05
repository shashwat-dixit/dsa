#include <iostream>
#include <bits/stdc++.h>

/*
    brute force
    time complexity - O(n)
    space complexity - O(1)
*/

void brute_check_prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            count++;
    if (count == 2)
        std::cout << "Hooray Prime Number!!!\n";
    else
        std::cout << ":(\nTry Again!!!\n";
}

/*
    sqrt approach
    time complexity - O(sqrt(n))
    space complexity - O(1)
*/

void sqrt_check_prime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (i != n / i)
                count++;
        }
    }
    if (count == 2)
        std::cout << "Hooray Prime Number!!! (sqrt approach)\n";
    else
        std::cout << ":(\nTry Again!!!\n";
}

int main(int argc, char const *argv[])
{
    int num = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;

    brute_check_prime(num);
    sqrt_check_prime(num);

    /* code */
    return 0;
}
