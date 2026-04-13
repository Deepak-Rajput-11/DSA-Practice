#include <iostream>
using namespace std;

int main()
{

    int arr[] = {5, -1, 2, -3, 7};
    int n = 5;
    int currentSum = 0;
    int maxSum = arr[0];
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << maxSum;
    return 0;
}