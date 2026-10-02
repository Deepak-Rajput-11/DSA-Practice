#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == mid + 1)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    int missing = start + 1;
    cout << "Missing number: " << missing;
    return 0;
}