#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6, 7, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int start = 0;
    int end = n - 1;
    int get = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            get = mid;
            break;
        }

        // LEFT half is sorted
        else if (arr[start] <= arr[mid])
        {
            if (arr[start] <= target && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        // RIGHT half is sorted
        else
        {
            if (arr[mid] < target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    if (get != -1)
    {
        cout << "Target found at index: " << get;
    }
    else
    {
        cout << "Target not found";
    }

    return 0;
}