
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string exp;
    cout << "Enter Expression: ";
    cin >> exp;

    bool foundRedundant = false;
    stack<char> s;

    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        if (ch != ')')
        {
            s.push(ch);
        }
        else
        {
            bool hasOperator = false;

            while (!s.empty() && s.top() != '(')
            {
                char temp = s.top();
                s.pop();

                if (temp == '+' || temp == '-' ||
                    temp == '*' || temp == '/' || temp == '^')
                {
                    hasOperator = true;
                }
            }

            if (!s.empty())
            {
                s.pop();
            }

            if (!hasOperator)
            {
                foundRedundant = true;
            }
        }
    }

    if (foundRedundant)
    {
        cout << "Redundant Brackets";
    }
    else
    {
        cout << "Not Redundant";
    }

    return 0;
}
