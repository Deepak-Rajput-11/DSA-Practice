#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7, 1, 5, -3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int MaxDiff = 0;
    int smallest = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] - smallest > MaxDiff)
        {
            MaxDiff = arr[i] - smallest;
        }
    }
    cout << MaxDiff;
    return 0;
}