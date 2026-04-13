#include <iostream>
using namespace std;

int main()
{

    int arr[] = {-5, -1, 2, 3, 2, -1, 4, 5, -1, 0};
    int n = 10;
    int currentSum = 0;
    int maxSum = arr[0];

    int start = 0, end = 0, tempStart = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
            tempStart = i + 1;
        }
    }
    cout << "Max Sum = " << maxSum << endl;
    cout << "Subarray = ";
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}