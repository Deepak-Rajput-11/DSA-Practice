// we have to perform operation in order of -> push,pop then min
#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<int> s1;
    stack<int> s2;

    // Push Operation
    for (int i = 0; i < 4; i++)
    {
        int value;
        cin >> value;
        s1.push(value);

        if (s2.empty() || value <= s2.top())
        {
            s2.push(value);
        }
    }

    // Get Minimum Before Pop
    if (s1.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Original Minimum: " << s2.top() << endl;
    }

    // Pop operation
    if (s1.empty())
    {
        cout << "Stack Underflow";
    }
    else
    {
        int removed = s1.top();
        s1.pop();

        if (s2.top() == removed)
        {
            s2.pop();
        }
    }

    // Get Minimum Operation
    if (s1.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Ater Pop Minimum: " << s2.top() << endl;
    }

    cout << "Top Element: " << s1.top();
    return 0;
}