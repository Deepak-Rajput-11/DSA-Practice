#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int start = 0;
    int end = n - 1;

    int first = -1;
    int last = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            first = mid;
            end = mid - 1;
        }
    }

    start = 0;
    end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            last = mid;
            start = mid + 1;
        }
    }

    if (first == -1)
    {
        cout << "Count: 0";
    }
    else
    {
        int count = last - first + 1;
        cout << "Count: " << count;
    }
    return 0;
}