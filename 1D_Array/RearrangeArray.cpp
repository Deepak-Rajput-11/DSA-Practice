#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = n - 1;
    int k = 0;
    int result[n];
    for (int i = 0; i < n / 2; i++)
    {
        // largest
        result[k] = arr[right];
        right--;
        k++;

        // Smallest
        result[k] = arr[left];
        left++;
        k++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << " " << result[i];
    }
    return 0;
}