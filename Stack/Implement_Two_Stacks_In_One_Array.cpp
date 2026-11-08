#include <iostream>
using namespace std;

int main()
{
    int arr[6];

    int top1 = -1;
    int top2 = 6;

    // Push Operation
    cout << " StackNumber : Value" << endl;
    for (int i = 0; i < 4; i++)
    {
        int stackNumber, value;
        cin >> stackNumber >> value;

        if (top1 + 1 == top2)
        {
            cout << "Stack Overflow" << endl;
        }
        else if (stackNumber == 1)
        {
            top1++;
            arr[top1] = value;
        }
        else if (stackNumber == 2)
        {
            top2--;
            arr[top2] = value;
        }
    }

    // Pop Operation
    cout << "Enter stack Want to pop: " << endl;
    int stackNumber;
    cin >> stackNumber;

    if (stackNumber == 1)
    {
        if (top1 == -1)
        {
            cout << "Stack 1 Underflow";
        }
        else
        {
            top1--;
        }
    }
    else if (stackNumber == 2)
    {
        if (top2 == 6)
        {
            cout << "Stack 2 Underflow";
        }
        else
        {
            top2++;
        }
    }

    // Peek Operation
    cout << "Enter stack you want to peek: " << endl;
    cin >> stackNumber;

    if (stackNumber == 1)
    {
        if (top1 == -1)
        {
            cout << "Stack 1 is empty";
        }
        else
        {
            cout << "Stack 1 top: " << arr[top1];
        }
    }
    else if (stackNumber == 2)
    {
        if (top2 == 6)
        {
            cout << "Stack 2 is empty";
        }
        else
        {
            cout << "Stack 2 top: " << arr[top2];
        }
    }

    // Display Operation
    cout << "\nEnter stack number you want to display" << endl;
    cin >> stackNumber;

    if (stackNumber == 1)
    {
        if (top1 == -1)
        {
            cout << "Stack 1 is empty";
        }
        else
        {
            for (int i = top1; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
        }
    }
    else if (stackNumber == 2)
    {
        if (top2 == 6)
        {
            cout << "Stack 2 is empty";
        }
        else
        {
            for (int i = top2; i < 6; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
    return 0;
}