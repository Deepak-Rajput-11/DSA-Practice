#include <iostream>
using namespace std;
int main()
{
    int row = 4, col = 4;
    int arr[row][col] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int target = 29;
    int i = 0;
    int j = col - 1;
    while (i < row && j >= 0)
    {
        if (target == arr[i][j])
        {
            cout << "Target found at row " << i << ", column " << j;
            break;
        }
        else if (target < arr[i][j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}