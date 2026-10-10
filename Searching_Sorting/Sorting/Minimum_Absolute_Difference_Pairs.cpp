#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {4, 2, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    int minDiff = arr[1] - arr[0];

    for (int i = 1; i < n - 1; i++)
    {
        int diff = arr[i + 1] - arr[i];

        if (diff < minDiff)
        {
            minDiff = diff;
        }
    }
    cout << "Minimum difference: " << minDiff << endl;
    cout << "Pairs:" << endl;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] == minDiff)
        {
            cout << arr[i] << " " << arr[i + 1] << endl;
        }
    }

    return 0;
}