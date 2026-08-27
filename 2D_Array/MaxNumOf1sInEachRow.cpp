#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1}};

    int maxCount = -1;
    int maxRow = -1;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxRow = i;
        }
    }
    cout << "Maximum numbers of 1s is " << maxCount << " at row " << maxRow;

    return 0;
}