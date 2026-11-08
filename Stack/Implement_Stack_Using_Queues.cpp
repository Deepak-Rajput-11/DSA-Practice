#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q1;
    queue<int> q2;

    // Push Operation
    cout << "Enter stack element: " << endl;
    for (int i = 0; i < 5; i++)
    {
        int value;
        cin >> value;

        q2.push(value);

        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }

    // Pop Operation
    if (q1.empty())
    {
        cout << "Stack Underflow";
    }
    else
    {
        q1.pop();
    }

    // Peek Operation
    if (q1.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Top element: " << q1.front() << endl;
    }

    // Display Operation
    if (q1.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        queue<int> temp = q1;

        while (!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }
    }
    return 0;
}