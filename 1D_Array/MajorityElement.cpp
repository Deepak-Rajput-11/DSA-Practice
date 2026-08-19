#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int candidate = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
        }
        if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int verifycount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
        {
            verifycount++;
        }
    }
    if (verifycount > n / 2)
    {
        cout << "Majority element: " << candidate;
    }
    else
    {
        cout << "No Majority element";
    }

    return 0;
}