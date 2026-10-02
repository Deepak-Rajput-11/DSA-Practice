#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int start = 0;
    int end = n - 1;

    int first = -1;
    int last = -1;

    // FIRST OCCURRENCE
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
            end = mid - 1; // continue searching left
        }
    }

    // Reset start and end
    start = 0;
    end = n - 1;

    // LAST OCCURRENCE
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
            start = mid + 1; // continue searching right
        }
    }

    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last;

    return 0;
}