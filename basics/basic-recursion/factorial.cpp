#include <iostream>

/*
    time complexity - O(n)
    space complexity - O(n)
*/
int factorial (int n) {
    if(n == 0)
    {
        return 1;
    }

    return n * factorial(n-1);
}


int main(int argc, char const *argv[])
{
    int num = 0;
    std::cout << "Enter the number: \n";
    std::cin >> num;

    std::cout << "The factorial is - " << factorial (num); 
    return 0;
}