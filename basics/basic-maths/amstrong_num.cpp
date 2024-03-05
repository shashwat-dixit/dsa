#include <iostream>
#include <bits/stdc++.h>

/*
    Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is 
    equal to a given number.
*/

bool amstrong_num_check(int n)
{
    int og_num = n;
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    int sum_of_power = 0;
    n = og_num;
    while (n != 0)
    {
        int digit = n % 10;
        sum_of_power += pow(digit, count);
        n = n / 10;
    }

    return (sum_of_power == og_num);
}

int main(int argc, char const *argv[])
{
    int num = 0;
    std::cout << "Enter number of digits: ";
    std::cin >> num;

    if (amstrong_num_check(num))
    {
        std::cout << "Hooray!!! Amstrong Number!!!";
    }
    else
    {
        std::cout << ":(\nNot an Amstrong Number! Try Again!";
    }
    return 0;
}
