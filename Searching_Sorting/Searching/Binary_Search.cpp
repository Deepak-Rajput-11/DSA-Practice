#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int target = 60;
    int start = 0;
    int end = 6;
    bool found = false;
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
            cout << "Target found at idx: " << mid;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Target not found";
    }
    return 0;
}