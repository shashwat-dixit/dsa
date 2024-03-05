#include <iostream>
#include <bits/stdc++.h>

/*
    easiest logic
    time complexity = o(n) n => number of digits
    space complexity = 0(1)
*/

int count_digits(int n)
{
    int count = 0;

    if (n == 0)
    {
        return 1;
    }
    else
    {
        while (n > 0)
        {
            count++;
            n /= 10;
        }
    }

    return count;
}

/*
    convert to string
    time complexity = o(1)
    space complexity = 0(1)
*/

int count_digits_string(int n)
{
    std::string x = std::to_string(n);
    return x.length();
}

/*
    logarithm logic
    time complexity = o(1)
    space complexity = 0(1)
*/

int count_digits_log(int n)
{
    if(n == 0){
        return 1;
    }
    int digits = floor(log10(n) + 1);
    return digits;
}

int main(int argc, char const *argv[])
{
    int num = 0;
    std::cout << "Enter number of digits: ";
    std::cin >> num;

    int count = 0;
    count = count_digits(num);

    std::cout << "\nThe number of digits are: " << count;
    count = count_digits_string(num);
    std::cout << "\nThe number of digits are (using string conversion method): " << count;
    count = count_digits_log(num);
    std::cout << "\nThe number of digits are (using log method): " << count;
    return 0;
}
