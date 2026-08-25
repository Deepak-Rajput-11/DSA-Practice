#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{3, 1, 3},
                     {3, 2, 4},
                     {0, 2, 5}};

    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        int smallest = arr[i][0];
        int mincol = 0;
        for (int j = 1; j < 3; j++)
        {
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
                mincol = j;
            }
        }
        bool isSaddle = true;
        for (int k = 0; k < 3; k++)
        {
            if (arr[k][mincol] > smallest)
            {
                isSaddle = false;
                break;
            }
        }
        if (isSaddle)
        {
            cout << "Saddle point: " << smallest;
            found = true;
        }
    }
    if (found == false)
    {
        cout << "No saddle point found";
    }
    return 0;
}