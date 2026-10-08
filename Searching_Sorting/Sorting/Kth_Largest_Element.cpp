#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 2, 1, 5, 6, 4};
    int k = 2;
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

    cout << "Kth largest element : " << arr[n - k];

    return 0;
}