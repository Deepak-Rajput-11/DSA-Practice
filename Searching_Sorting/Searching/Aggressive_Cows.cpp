#include <iostream>
using namespace std;
int main()
{
    int stalls[] = {1, 2, 4, 8, 9};
    int n = sizeof(stalls) / sizeof(stalls[0]);
    int cows = 3;
    int start = 1;
    int end = stalls[n - 1] - stalls[0];
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int count = 1;
        int lastPosition = stalls[0];

        for (int i = 1; i < n; i++)
        {

            if (stalls[i] - lastPosition >= mid)
            {
                count++;
                lastPosition = stalls[i];
            }
        }
        if (count >= cows)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Maximum minimum distance: " << ans;
    return 0;
}