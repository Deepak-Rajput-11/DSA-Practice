#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {5, 3, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

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
    int min = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] < min)
        {
            min = arr[i] - arr[i - 1];
        }
    }
    cout << "Minimum Difference: " << min;
    return 0;
}