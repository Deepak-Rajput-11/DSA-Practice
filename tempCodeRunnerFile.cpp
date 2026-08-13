#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int sum = 0;
    int max = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        if (sum > max)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << max;
    return 0;
}