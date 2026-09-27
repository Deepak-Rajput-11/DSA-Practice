#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    int first = -1;
    int last = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < 1)
        {
            start = mid + 1;
        }
        else if (arr[mid] > 1)
        {
            end = mid - 1;
        }
        else
        {
            first = mid;
            end = mid - 1;
        }
    }

    cout << "First one at idx: " << first;
    return 0;
}
