#include <iostream>
using namespace std;
int main()
{
    int arr[]{1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int LeftSum = 0;
        int RightSum = 0;
        for (int j = 0; j < i; j++)
        {
            LeftSum += arr[j];
        }
        for (int j = i + 1; j < n; j++)
        {
            RightSum += arr[j];
        }
        if (LeftSum == RightSum)
        {
            cout << "Equilibrium index: " << i;
            break;
        }
    }
    return 0;
}