#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int UpperSum = 0;
    int LowerSum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i <= j)
            {
                UpperSum += arr[i][j];
            }
            if (i >= j)
            {
                LowerSum += arr[i][j];
            }
        }
    }
    cout << "Upper Triangle Sum is: " << UpperSum << endl;
    cout << "Lower Triangle Sum is: " << LowerSum;
    return 0;
}
