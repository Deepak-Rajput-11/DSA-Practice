#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {10, 5, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    int sorted[n];

    for (int i = 0; i < n; i++)
    {
        sorted[i] = arr[i];
    }

    sort(sorted, sorted + n);

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != sorted[i])
        {

            for (int j = i + 1; j < n; j++)
            {

                if (sorted[i] == arr[j])
                {
                    swap(arr[i], arr[j]);
                    count++;
                    break;
                }
            }
        }
    }
    cout << "Total Number of swap in this array: " << count;

    return 0;
}