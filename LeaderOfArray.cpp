#include <iostream>
using namespace std;

int main()
{
    int arr[] = {21, 332, 11, 44, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[n - 1];

    int leaders[n];
    int count = 0;

    // Last element is always a leader
    leaders[count] = arr[n - 1];
    count++;

    // Find remaining leaders from right to left
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > largest)
        {
            leaders[count] = arr[i];
            count++;
            largest = arr[i];
        }
    }

    // Print leaders in original order
    for (int i = count - 1; i >= 0; i--)
    {
        cout << leaders[i] << " ";
    }

    return 0;
}