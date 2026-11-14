#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int heights[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(heights) / sizeof(heights[0]);
    stack<int> s;
    int width;
    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {

        while (!s.empty() && heights[s.top()] > heights[i])
        {
            int poppedIndex = s.top();
            s.pop();

            int height = heights[poppedIndex];

            if (s.empty())
            {
                width = i;
            }
            else
            {
                width = i - s.top() - 1;
            }

            int area = height * width;

            if (area > maxArea)
            {
                maxArea = area;
            }
        }
        s.push(i);
    }

    while (!s.empty())
    {
        int poppedIndex = s.top();
        s.pop();

        int height = heights[poppedIndex];

        if (s.empty())
        {
            width = n;
        }
        else
        {
            width = n - s.top() - 1;
        }

        int area = height * width;

        if (area > maxArea)
        {
            maxArea = area;
        }
    }
    cout << "Maximum Area: " << maxArea;
    return 0;
}