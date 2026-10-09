#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 1, 2, 4, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    for (int i = 0; i < n; i++)
    {
        int end = min(i + k, n - 1);
        int minIndex = i;

        for (int j = i + 1; j <= end; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int smallest = arr[minIndex];

        for (int j = minIndex; j > i; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[i] = smallest;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}