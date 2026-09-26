#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;

    while (start < end)
    {

        int mid = start + (end - start) / 2;
        if (mid % 2 != 0)
        {
            mid--;
        }

        if (arr[mid] == arr[mid + 1])
        {
            start = mid + 2;
        }
        else
        {
            end = mid;
        }
    }
    int single = arr[start];
    cout << "Single Element: " << single;
    return 0;
}