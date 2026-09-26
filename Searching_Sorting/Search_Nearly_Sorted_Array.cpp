#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 40;
    int start = 0;
    int end = n - 1;
    bool found = false;
    int get = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            get = mid;
            found = true;
            break;
        }
        else if (mid - 1 >= start && arr[mid - 1] == target)
        {
            get = mid - 1;
            found = true;
            break;
        }
        else if (mid + 1 <= end && arr[mid + 1] == target)
        {
            get = mid + 1;
            found = true;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
    }
    if (found)
    {
        cout << "Target found at index: " << get;
    }
    else
    {
        cout << "Target not found";
    }
    return 0;
}