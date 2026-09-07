#include <iostream>
using namespace std;
int main()
{
    int row = 4, col = 4;
    int arr[row][col] = {
        {2, 6, 9, 14},
        {18, 21, 27, 31},
        {35, 40, 46, 52},
        {58, 63, 71, 80}};

    int target = 46;

    int low = 0;
    int high = row * col - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int r = mid / col;
        int c = mid % col;

        if (arr[r][c] == target)
        {
            cout << "Target is found at (" << r << " , " << c << " )";
            break;
        }

        else if (arr[r][c] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}