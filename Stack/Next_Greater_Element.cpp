#include <iostream>
#include <stack>
using namespace std;
int main()
{

    int arr[] = {4, 5, 2, 10, 8};
    const int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> s;
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {

        while (!s.empty() && s.top() <= arr[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}