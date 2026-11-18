#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str = "3[a2[c]]";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {

        if (str[i] != ']')
        {
            s.push(str[i]);
        }
        else
        {
            string decoded = "";

            while (s.top() != '[')
            {
                decoded += s.top();
                s.pop();
            }

            s.pop();

            int count = 0;

            while (!s.empty() && isdigit(s.top()))
            {
                count = count * 10 + (s.top() - '0');
                s.pop();
            }

            reverse(decoded.begin(), decoded.end());

            string repeated = "";

            for (int j = 0; j < count; j++)
            {
                repeated += decoded;
            }

            for (int j = 0; j < repeated.length(); j++)
            {
                s.push(repeated[j]);
            }
        }
    }

    string result = "";

    while (!s.empty())
    {
        result += s.top();
        s.pop();
    }

    reverse(result.begin(), result.end());

    cout << result;

    return 0;
}