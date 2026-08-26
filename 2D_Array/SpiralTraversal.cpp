#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    int top = 0;
    int bottom = 2;
    int left = 0;
    int right = 2;

    while (top <= bottom && left <= right)
    {
        // LEFT -> RIGHT
        for (int j = left; j <= right; j++)
        {
            cout << arr[top][j] << " ";
        }
        top++;

        // TOP -> BOTTOM
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        // RIGHT -> LEFT
        for (int j = right; j >= left; j--)
        {
            cout << arr[bottom][j] << " ";
        }
        bottom--;

        // BOTTOM -> TOP

        for (int i = bottom; i >= top; i--)
        {
            cout << arr[i][left] << " ";
        }
        left++;
    }

    return 0;
}