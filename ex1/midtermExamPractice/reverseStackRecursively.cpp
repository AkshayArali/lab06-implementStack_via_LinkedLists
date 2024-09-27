#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
// Array-based stack class
class Stack
{
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return top == MAX_SIZE - 1;
    }
    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack is full" << endl;
            return;
        }
        arr[++top] = value;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top--];
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Recursive function to reverse a stack
Stack __reverseStack(Stack &s)
{
    s.
}
void reverseStack(Stack &s)
{
    // Base case: stack is empty or has only one element
    if (s.isEmpty())
    {
        return;
    }
    // TODO Recursive case
    return reverseStack(__reverseStack(s));
}

int main()
{
    Stack s;
    for (int i = 1; i <= 5; i++)
    {
        s.push(i);
    }
    cout << "Original stack: ";
    s.display();
    reverseStack(s);
    cout << "Reversed stack: ";
    s.display();
    return 0;
}