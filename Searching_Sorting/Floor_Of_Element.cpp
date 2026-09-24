#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int start = 0;
    int end = n - 1;
    int get = -1;
    bool found = false;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            get = arr[mid];
            found = true;
            break;
        }
        else if (arr[mid] <= target)
        {
            found = true;
            get = arr[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (found)
    {
        cout << "Floor: " << get;
    }
    return 0;
}