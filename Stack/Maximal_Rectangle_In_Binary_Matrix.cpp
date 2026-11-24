#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int matrix[4][5] = {
        {1, 0, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0}};

    int rows = 4;
    int cols = 5;

    int heights[5] = {0};
    int maxArea = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 1)
            {
                heights[j]++;
            }
            else
            {
                heights[j] = 0;
            }
        }

        stack<int> s;
        int width;

        for (int j = 0; j < cols; j++)
        {
            while (!s.empty() && heights[s.top()] > heights[j])
            {
                int poppedIndex = s.top();
                s.pop();

                int height = heights[poppedIndex];

                if (s.empty())
                {
                    width = j;
                }
                else
                {
                    width = j - s.top() - 1;
                }

                int area = height * width;

                if (area > maxArea)
                {
                    maxArea = area;
                }
            }

            s.push(j);
        }

        while (!s.empty())
        {
            int poppedIndex = s.top();
            s.pop();

            int height = heights[poppedIndex];

            if (s.empty())
            {
                width = cols;
            }
            else
            {
                width = cols - s.top() - 1;
            }

            int area = height * width;

            if (area > maxArea)
            {
                maxArea = area;
            }
        }
    }
    cout << "Maximum Area: " << maxArea;
    return 0;
}