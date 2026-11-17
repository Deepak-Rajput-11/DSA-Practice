#include <iostream>
#include <stack>
using namespace std;
int main()
{

    int M[3][3] = {
        {0, 0, 1},
        {0, 0, 1},
        {0, 0, 0}};

    int n = 3;
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (M[a][b] == 1)
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }
    int candidate = s.top();

    for (int i = 0; i < n; i++)
    {
        if (i != candidate && M[candidate][i] == 1)
        {
            cout << -1;
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i != candidate && M[i][candidate] == 0)
        {
            cout << -1;
            return 0;
        }
    }
    cout << candidate;
    return 0;
}