#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int temperatures[] = {73, 74, 75, 71, 69, 72, 76, 73};
    const int n = sizeof(temperatures) / sizeof(temperatures[0]);

    stack<int> s;
    int ans[n];

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && temperatures[s.top()] <= temperatures[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i] = 0;
        }
        else
        {
            ans[i] = s.top() - i;
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}