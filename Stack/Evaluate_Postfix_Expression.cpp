#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string postfix;
    cout << "Enter Postfix Expression: ";
    cin >> postfix;

    stack<int> s;
    for (int i = 0; i < postfix.length(); i++)
    {
        char ch = postfix[i];
        if (ch >= '0' && ch <= '9')
        {
            s.push(ch - '0');
        }
        else
        {
            int operand2 = s.top();
            s.pop();

            int operand1 = s.top();
            s.pop();

            int result;

            if (ch == '+')
            {
                result = operand1 + operand2;
            }
            else if (ch == '-')
            {
                result = operand1 - operand2;
            }
            else if (ch == '*')
            {
                result = operand1 * operand2;
            }
            else if (ch == '/')
            {
                result = operand1 / operand2;
            }

            s.push(result);
        }
    }
    cout << "Result: " << s.top();
    return 0;
}