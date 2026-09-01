#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 4, 7},
        {2, 5, 8},
        {3, 6, 9}};

    int target = 10;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int row2 = 0; row2 < 3; row2++)
            {
                for (int col2 = 0; col2 < 3; col2++)
                {
                    if (arr[i][j] + arr[row2][col2] == target)
                    {
                        cout << arr[i][j] << " " << arr[row2][col2] << endl;
                    }
                }
            }
        }
    }
    return 0;
}