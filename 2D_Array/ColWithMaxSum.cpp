#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int maxsum = INT_MIN;
    int maxcol = -1;
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
            maxcol = j;
        }
    }
    cout << "Maximum sum is " << maxsum << " At column " << maxcol;

    return 0;
}