#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 4, 7, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        int missing = arr[mid] - (mid + 1);

        if (missing < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // after while loop
    // start = 4 -> end + 1
    // end = 3 -> start - 1

    // missingbefore = arr[end]-(end+1)
    // remaining = k - missingbefore So,
    // remaining = k - (arr[end]-(end+1))
    // answer = arr[end] + remaining
    // answer = arr[end] + k - (arr[end]-(end+1))  -> simply using math
    // answer = arr[end] + k - arr[end] + end + 1  -> again simplify
    // answer = k + end + 1
    // answer = k + start

    int answer = k + start;

    cout << "Kth missing positive number: " << answer;

    return 0;
}