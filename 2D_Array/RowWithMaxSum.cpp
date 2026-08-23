#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 95, 6},
        {7, 8, 9}};

    int maxsum = INT_MIN;
    int maxrow = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
            maxrow = i;
        }
    }
    cout << "Maximum sum " << maxsum << " at row " << maxrow;
    return 0;
}