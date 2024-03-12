#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> data;

public:
    // Constructor to initialize an empty stack
    Stack() {}

    // Function to push an element onto the stack
    void push(int val) {
        data.push_back(val);
    }

    // Function to pop the top element from the stack
    void pop() {
        if (!isEmpty()) {
            data.pop_back();
        } else {
            std::cout << "Stack underflow! Cannot pop from an empty stack." << std::endl;
        }
    }

    // Function to return the top element of the stack
    int top() {
        if (!isEmpty()) {
            return data.back();
        } else {
            std::cout << "Stack is empty! Cannot return top element." << std::endl;
            return -1; // Return a sentinel value indicating stack is empty
        }
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return data.empty();
    }
};

int main() {
    Stack stack;

    // Push elements onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Print top element of the stack
    std::cout << "Top element of the stack: " << stack.top() << std::endl;

    // Pop elements from the stack
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    // Check if the stack is empty
    if (stack.isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    return 0;
}
