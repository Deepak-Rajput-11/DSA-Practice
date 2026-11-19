#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{

    int height[] = {4, 2, 0, 3, 2, 5};
    int n = 6;
    int totalWater = 0;

    stack<int> s;
    for (int i = 0; i < n; i++)
    {

        while (!s.empty() && height[i] > height[s.top()])
        {
            int mid = s.top();
            s.pop();

            if (s.empty())
            {
                break;
            }

            int left = s.top();
            int width = i - left - 1;
            int waterHeight = min(height[left], height[i]) - height[mid];
            int water = width * waterHeight;
            totalWater += water;
        }
        s.push(i);
    }
    cout << "Total Water: " << totalWater;
    return 0;
}