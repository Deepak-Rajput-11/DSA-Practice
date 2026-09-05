#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int maxdiff = largest - smallest;
    cout << "Maximum Difference: " << maxdiff;
    return 0;
}