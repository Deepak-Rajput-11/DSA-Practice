#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 2, 4, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i]; // element we want to insert
        int j = i - 1;     // start checking from its left

        for (; j >= 0 && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j]; // shift larger elements right
        }

        arr[j + 1] = temp; // insert temp into correct position
    }
    
    // Print the new Array

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}