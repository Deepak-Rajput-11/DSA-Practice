#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 3;
    int min = INT_MAX;

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }

    for (int i = 0; i <= n - m; i++)
    {

        if (arr[i + m - 1] - arr[i] < min)
        {
            min = arr[i + m - 1] - arr[i];
        }
    }

    cout << min;
    return 0;
}