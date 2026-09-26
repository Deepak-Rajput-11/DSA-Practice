#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    int peak = arr[start];
    cout << "Peak Element: " << peak;
    return 0;
}