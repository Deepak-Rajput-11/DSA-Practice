
#include <iostream>
using namespace std;

int main()
{
    // Stack Initialization
    int arr[5];
    int top = -1;

    // Push Operation
    cout << "Enter stack element: " << endl;
    for (int i = 0; i < 3; i++)
    {
        int value;
        cin >> value;

        if (top == 4)
        {
            cout << "Stack Overflow";
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }

    // Pop Operation
    if (top == -1)
    {
        cout << "Stack Underflow";
    }
    else
    {
        cout << "Element Pop: " << arr[top] << endl;
        top--;
    }

    // Peek Operation
    if (top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Top element: " << arr[top] << endl;
    }

    // Display Operation
    if (top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
