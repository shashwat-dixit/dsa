#include<iostream>

/*
    parametrized approach
    time complexity = O(n)
    space complexity = O(n)
*/
void recursive_sum_parametrized(int input, int sum) {
    if (input < 1) {
        std::cout << sum;
        return;
    }

    recursive_sum_parametrized(input - 1, sum+input);    
}

/*
    functional approach
    time complexity = O(n)
    space complexity = O(n)

    The value is stored in the function itself.
*/
int recursive_sum_functional(int input) {
    if (input == 0) {
        return 0;
    }

    return input + recursive_sum_functional(input-1);    
}

int main(int argc, char const *argv[])
{
    int num;
    std:: cout << "Enter the number\n";
    std::cin>> num;
    recursive_sum_parametrized(num, 0);
    std::cout << "\n" << recursive_sum_functional(num);

    return 0;
}
