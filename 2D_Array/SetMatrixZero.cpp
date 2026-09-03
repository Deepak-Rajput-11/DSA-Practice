#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    int zeroRow[3] = {0};
    int zeroCol[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                zeroRow[i] = 1;
                zeroCol[j] = 1;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (zeroRow[i] == 1 || zeroCol[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}