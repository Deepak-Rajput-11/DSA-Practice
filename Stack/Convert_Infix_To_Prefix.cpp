#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int precedence(char op)
{
    if (op == '^')
    {
        return 3;
    }
    else if (op == '*' || op == '/')
    {
        return 2;
    }
    else if (op == '+' || op == '-')
    {
        return 1;
    }

    return 0;
}

int main()
{
    string infix;
    string prefix = "";

    cout << "Enter Infix Expression: ";
    cin >> infix;

    stack<char> s;
    for (int i = infix.length() - 1; i >= 0; i--)
    {
        char ch = infix[i];
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'))
        {
            prefix += ch;
        }
        else if (ch == ')')
        {
            s.push(ch);
        }
        else if (ch == '(')
        {
            while (!s.empty() && s.top() != ')')
            {
                prefix += s.top();
                s.pop();
            }

            if (!s.empty())
            {
                s.pop();
            }
        }
        else
        {
            while (!s.empty() && s.top() != ')' &&
                   (precedence(s.top()) > precedence(ch) ||
                    (precedence(s.top()) == precedence(ch) && ch == '^')))
            {
                prefix += s.top();
                s.pop();
            }

            s.push(ch);
        }
    }

    while (!s.empty())
    {
        prefix += s.top();
        s.pop();
    }
    reverse(prefix.begin(), prefix.end());

    cout << "Prefix Expression: " << prefix;
    return 0;
}