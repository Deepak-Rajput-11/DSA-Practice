#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int col = 3;
    int arr[row][col] = {
        {0, 5, 3},
        {0, 1, 0},
        {7, 1, 0}};
    int n = row * col;
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                count += 1;
            }
        }
    }

    if (count > n / 2)
    {
        cout << "Sparse Matrix";
    }
    else
    {
        cout << "Non-Sparse Matrix";
    }
    return 0;
}