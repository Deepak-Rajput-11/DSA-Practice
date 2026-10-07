#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

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

    cout << "Kth smallest element : " << arr[k - 1];

    return 0;
}