#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int top;            // Index of the top element in the stack
    int array[MAX_SIZE]; // Array to store stack elements

public:
    Stack() {           // Constructor to initialize the stack
        top = -1;       // Initializing top as -1 to indicate an empty stack
    }

    void push(int element) {
        if (top >= MAX_SIZE - 1) {    // Check if the stack is full
            cout << "Stack Overflow\n";
            return;
        }
        array[++top] = element;        // Increment top and add the element to the stack
        cout << "Pushed " << element << " to the stack.\n";
    }

    void pop() {
        if (top < 0) {          // Check if the stack is empty
            cout << "Stack Underflow\n";
            return;
        }
        int poppedElement = array[top--];   // Decrement top and return the element
        cout << "Popped " << poppedElement << " from the stack.\n";
    }

    int peek() {
        if (top < 0) {          // Check if the stack is empty
            cout << "Stack is empty\n";
            return -1;
        }
        return array[top];      // Return the top element without removing it
    }

    bool isEmpty() {
        return top < 0;         // Check if the stack is empty
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << "\n";

    stack.pop();
    stack.pop();

    cout << "Top element: " << stack.peek() << "\n";

    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    return 0;
}
