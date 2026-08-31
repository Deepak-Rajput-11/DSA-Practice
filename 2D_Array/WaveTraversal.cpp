#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int col = 4;
    int arr[row][col] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    for (int j = 0; j < col; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 2; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}