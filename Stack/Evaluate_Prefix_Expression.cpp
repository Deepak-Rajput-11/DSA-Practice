#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string prefix;
    cout << "Enter Prefix Expression: ";
    cin >> prefix;

    stack<int> s;
    for (int i = prefix.length() - 1; i >= 0; i--)
    {
        char ch = prefix[i];
        if (ch >= '0' && ch <= '9')
        {
            s.push(ch - '0');
        }
        else
        {
            int operand1 = s.top();
            s.pop();

            int operand2 = s.top();
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