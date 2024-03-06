#include<iostream>

// fib(i) = fib(i-1) + fib(i-2) & fib(0) = 0 fib(1) = 1

/*
    For Loop Approach
    Time Complexity - O(n) 
    Space Complexity - O(1)
*/

void fibonacci_gen(int num)
{
    if(num == 0)
        std::cout << "The fibonacci series upto " << num << "th is : \n" << 0;

    else {
        int last = 0;
        int second_last = 1;
        std::cout << "The fibonacci series upto " << num << "th is : \n";
        std::cout << last << "\t" << second_last << "\t";
        int cur;

        for(int i = 2; i <= num; i++){
            cur = last + second_last;
            last = second_last;
            second_last = cur;
            std::cout << cur << "\t";
        }
        std::cout << "\nUsing For Loop\n";
    }
}

/*
    Recursive Approach
    Time Complexity - O(2^N)
    Space Complexity - O(N)
*/

int fibonacci_gen_recursive(int num) {
    if(num <= 1)
        return num;

    int last = fibonacci_gen_recursive(num-1);
    int second_last = fibonacci_gen_recursive(num-2);

    return last + second_last;
}

int main(int argc, char const *argv[])
{
    int size = 0;
    std::cout << "Enter the number till which you want fibonacci series: \n";
    std::cin >> size;

    fibonacci_gen(size);

    std::cout << "The fibonacci series for " << size << "th is :\n" << fibonacci_gen_recursive(size);
    return 0;
}
