#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int value)
{
    if (s.empty())
    {
        s.push(value);
        return;
    }

    int topElement = s.top();
    s.pop();

    insertAtBottom(s, value);

    s.push(topElement);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int topElement = s.top();
    s.pop();

    reverseStack(s);

    insertAtBottom(s, topElement);
}

int main()
{
    stack<int> s;

    // Push Operation
    for (int i = 0; i < 3; i++)
    {
        int value;
        cin >> value;
        s.push(value);
    }

    reverseStack(s);

    // Display Reversed Stack
    stack<int> temp = s;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}