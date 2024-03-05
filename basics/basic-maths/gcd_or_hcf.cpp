#include <iostream>
#include <bits/stdc++.h>

/*
    brute force
    time complexity - O(n)
    space complexity - O(1)
*/

int brute_gcd(int n1, int n2)
{
    int ans = 0;
    for (int i = 1; i <= std::min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            ans = i;
    }
    return ans;
}

/*
    euclidean algorithm - optimal approach
    time complexity - O(logɸmin(a,b)), where ɸ is 1.61.
    space complexity - O(1)
*/

int euclidean_gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return euclidean_gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    std::cout << "Enter the numbers:\n";
    std::cin >> num1 >> num2;

    int hcf = brute_gcd(num1, num2);
    std::cout << "The GCD/HCF of the number is - " << hcf;

    hcf = euclidean_gcd(num1, num2);
    std::cout << "\nThe GCD/HCF of the number is (euclidean algorithm) - " << hcf;

    return 0;
}
