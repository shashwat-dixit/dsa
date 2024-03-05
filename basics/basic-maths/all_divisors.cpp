#include <iostream>
#include <bits/stdc++.h>


/*
    brute force - iterate through each number till the input is reached
    time complexity - O(n)
    space complexity - O(1)
*/

void brute_all_divisors(int n)
{
    for (int i = 1; i <= n; i ++)
        if(n % i == 0)
            std::cout << i << "\n";
}

/*
    sqrt approach 
    time complexity - O(sqrt(n))
    space complexity - O(1)
*/

void sqrt_all_divisors(int n) {
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            std::cout << i << "\n";
            if (i != n/i)
                std::cout << n/i << "\n"; 
        }
    }
}




int main(int argc, char const *argv[])
{
    int num = 0;
    std::cout << "Enter the number: ";
    std::cin >> num;


    std::cout << "Divisors are - \n";
    brute_all_divisors(num);

    std::cout << "Divisors are (using sqrt approach) - \n";
    sqrt_all_divisors(num);

    /* code */
    return 0;
}
