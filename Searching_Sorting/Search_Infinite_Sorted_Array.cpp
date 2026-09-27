#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91, 105, 120, 150, 180, 200};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 91;
    int start = 0;
    int end = 1;
    int get = -1;
    bool found = false;

    while (end < n && arr[end] < target)
    {
        start = end + 1;
        end = end * 2;

        if (end >= n)
        {
            end = n - 1;
        }
    }

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
            get = mid;
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Target found at idx: " << get;
    }
    else
    {
        cout << "Target not found";
    }
    return 0;
}