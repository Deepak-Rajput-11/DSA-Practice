#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    int rotation = start;
    cout << "Rotation count: " << rotation;

    return 0;
}