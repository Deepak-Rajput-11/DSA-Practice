#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &s, int value)
{
    if (s.empty() || value <= s.top())
    {
        s.push(value);
        return;
    }

    int topElement = s.top();
    s.pop();

    insertSorted(s, value);

    s.push(topElement);
}

void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int topElement = s.top();
    s.pop();

    sortStack(s);

    insertSorted(s, topElement);
}

int main()
{
    stack<int> s;

    // Push Operation
    for (int i = 0; i < 4; i++)
    {
        int value;
        cin >> value;
        s.push(value);
    }

    sortStack(s);

    // Display the sorted stack
    stack<int> temp = s;

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }

    return 0;
}