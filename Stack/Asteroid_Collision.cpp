#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int asteroids[] = {10, 2, -5};
    int n = 3;

    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        int current = asteroids[i];
        bool destroyed = false;
        while (!s.empty() && s.top() > 0 && current < 0)
        {
            if (abs(s.top()) < abs(current))
            {
                s.pop();
            }

            else if (abs(s.top()) == abs(current))
            {
                s.pop();
                destroyed = true;
                break;
            }
            else
            {
                destroyed = true;
                break;
            }
        }
        if (!destroyed)
        {
            s.push(current);
        }
    }

    stack<int> temp;

    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }

    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}