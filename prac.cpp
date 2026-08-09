#include <iostream>
using namespace std;

int main()
{

    int arr[] = {3, 2, -5, 1, 4};
    int n = 5;
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

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int arr[n] = {3, 2, -5, 1, 4};
//     int CurSum = 0;
//     int MaxSum = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         CurSum += arr[i];
//         if (CurSum > MaxSum)
//         {
//             MaxSum = CurSum;
//         }
//         if (CurSum < 0)
//         {
//             CurSum = 0;
//         }
//     }
//     cout << MaxSum;
//     return 0;
// }