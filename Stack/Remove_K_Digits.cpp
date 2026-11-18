#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string num = "1432219";
    int k = 3;

    stack<char> s;

    for (int i = 0; i < num.length(); i++)
    {
        while (!s.empty() && k > 0 && s.top() > num[i])
        {
            s.pop();
            k--;
        }

        s.push(num[i]);
    }
    while (k > 0 && !s.empty())
    {
        s.pop();
        k--;
    }

    stack<char> temp;

    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }

    string result = "";

    while (!temp.empty())
    {
        result += temp.top();
        temp.pop();
    }

    int i = 0;

    while (i < result.length() && result[i] == '0')
    {
        i++;
    }

    result = result.substr(i);

    if (result.empty())
    {
        result = "0";
    }

    cout << result;
    return 0;
}