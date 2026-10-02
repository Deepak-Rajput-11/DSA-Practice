#include <iostream>
using namespace std;
int main()
{
    int weights[] = {1, 2, 3, 4, 5};
    int n = sizeof(weights) / sizeof(weights[0]);
    int days = 3;
    int start = 5;
    int end = 15;
    int capacity = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int totalDays = 1;
        int currentWeight = 0;

        for (int i = 0; i < n; i++)
        {
            if (currentWeight + weights[i] <= mid)
            {
                currentWeight += weights[i];
            }
            else
            {
                totalDays++;
                currentWeight = weights[i];
            }
        }
        if (totalDays <= days)
        {
            capacity = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << "Minimum ship weight capacity per day: " << capacity;
    return 0;
}