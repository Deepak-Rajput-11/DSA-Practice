#include <iostream>
#include <stack>
using namespace std;
int main()
{

    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    const int n = sizeof(prices) / sizeof(prices[0]);

    stack<int> s;
    int ans[n];
    for (int i = 0; i < n; i++)
    {

        while (!s.empty() && prices[s.top()] <= prices[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans[i] = i + 1;
        }
        else
        {
            ans[i] = i - s.top();
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}