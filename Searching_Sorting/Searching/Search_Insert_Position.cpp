#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int start = 0;
    int end = n - 1;
    bool found = false;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            cout << "Target found at idx: " << mid;
            found = true;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (!found)
    {
        cout << "Insert Position: " << start;
    }

    return 0;
}