#include <iostream>
#include <string>

/*
    Time Complexity - O(n)
    Space Complexity - O(1)
*/

bool is_palindrome(std::string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
            left++;
        if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else
        {
            left++;
            right--;
        }
    }
    return true;
}

/*
    Recursive Approach
    Time Complexity -
    Space Complexity -
*/

bool is_palindrome_recursion(int i, std::string &s)
{

    // Base Condition
    // If i exceeds half of the string means all the elements
    // are compared, we return true.
    if (i >= s.length() / 2)
        return true;

    // If the start is not equal to the end, not the palindrome.
    if (s[i] != s[s.length() - i - 1])
        return false;

    // If both characters are the same, increment i and check start+1 and end-1.
    return is_palindrome_recursion(i + 1, s);
}

int main(int argc, char const *argv[])
{
    std::cout << "Enter the string to check for palindrome- \n";
    std::string input_str;
    std::cin >> input_str;

    if (is_palindrome(input_str))
        std::cout << "Got'tem!!!\nThe string is palindrome.\n";
    else
        std::cout << ":(\nUh Oh! The string is not palindrome.\n";

    if (is_palindrome_recursion(0, input_str))
        std::cout << "Got'tem!!!\nThe string is palindrome.\n";
    else
        std::cout << ":(\nUh Oh! The string is not palindrome.\n";

    return 0;
}
