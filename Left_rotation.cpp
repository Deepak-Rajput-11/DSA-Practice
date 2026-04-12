#include <iostream>
using namespace std;

void SwapReverse(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{

    int n = 5;
    int k = 1;
    int arr[n] = {1, 2, 3, 4, 5};

    k = k % n;

    SwapReverse(arr, 0, k - 1);
    SwapReverse(arr, k, n - 1);
    SwapReverse(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}