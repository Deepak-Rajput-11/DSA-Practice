#include <iostream>
#include <string>
#include <stack>
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
    string postfix = "";

    cout << "Enter Infix Expression: ";
    cin >> infix;

    stack<char> s;
    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'))
        {
            postfix += ch;
        }
        else if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                s.pop();
            }

            if (!s.empty())
            {
                s.pop();
            }
        }
        else
        {
            while (!s.empty() && s.top() != '(' &&
                   (precedence(s.top()) > precedence(ch) ||
                    (precedence(s.top()) == precedence(ch) && ch != '^')))
            {
                postfix += s.top();
                s.pop();
            }

            s.push(ch);
        }
    }

    while (!s.empty())
    {
        postfix += s.top();
        s.pop();
    }
    cout << "Postfix Expression: " << postfix;
    return 0;
}