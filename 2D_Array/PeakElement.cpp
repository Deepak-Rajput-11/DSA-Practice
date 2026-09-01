#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int col = 3;
    int arr[row][col] = {
        {10, 20, 15},
        {21, 30, 14},
        {7, 16, 32}};

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            bool isPeak = true;
            // left element
            if (j > 0)
            {
                if (arr[i][j] < arr[i][j - 1])
                {
                    isPeak = false;
                }
            }
            // right element
            if (j < col - 1)
            {
                if (arr[i][j] < arr[i][j + 1])
                {
                    isPeak = false;
                }
            }
            // top element
            if (i > 0)
            {
                if (arr[i][j] < arr[i - 1][j])
                {
                    isPeak = false;
                }
            }
            // bottom element
            if (i < row - 1)
            {
                if (arr[i][j] < arr[i + 1][j])
                {
                    isPeak = false;
                }
            }
            if (isPeak == true)
            {
                cout << "Peak Element: " << arr[i][j] << endl;
            }
        }
    }
    return 0;
}