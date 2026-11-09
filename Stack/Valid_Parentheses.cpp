#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<char> s;
    bool isBalanced = true;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (s.empty())
            {
                isBalanced = false;
                break;
            }

            if ((ch == ')' && s.top() != '(') ||
                (ch == '}' && s.top() != '{') ||
                (ch == ']' && s.top() != '['))
            {
                isBalanced = false;
                break;
            }
            else
            {
                s.pop();
            }
        }
    }

    if (!s.empty())
    {
        isBalanced = false;
    }

    if (isBalanced)
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
    return 0;
}