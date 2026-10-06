#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {-7, -3, 2, 3, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = n - 1;
    int k = n - 1;

    vector<int> result(n);

    while (left <= right)
    {
        if (arr[left] * arr[left] < arr[right] * arr[right])
        {
            result[k] = arr[right] * arr[right];
            right--;
        }
        else
        {
            result[k] = arr[left] * arr[left];
            left++;
        }
        k--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << result[i];
    }

    return 0;
}