#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int piles[] = {3, 6, 7, 11};
    int n = sizeof(piles) / sizeof(piles[0]);
    int h = 8;
    int start = 1;
    int end = 11;
    int answer = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int totalHours = 0;

        for (int i = 0; i < n; i++)
        {
            totalHours += ceil((double)piles[i] / mid);
        }
        if (totalHours <= h)
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Minimum eating speed: " << answer;
    return 0;
}