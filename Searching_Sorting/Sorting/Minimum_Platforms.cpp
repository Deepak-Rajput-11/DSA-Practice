#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arrival[] = {900, 940, 950, 1100, 1500, 1800};
    int departure[] = {910, 1200, 1120, 1130, 1900, 2000};
    const int n = 6;

    int arrivalSort[n];
    int departureSort[n];

    for (int i = 0; i < n; i++)
    {
        arrivalSort[i] = arrival[i];
        departureSort[i] = departure[i];
    }

    sort(arrivalSort, arrivalSort + n);
    // [900 940 950 1100 1500 1800]
    sort(departureSort, departureSort + n);
    // [ 910 1120 1130 1200 1900 2000]

    int i = 1; // Point to next train arrival
    int j = 0; // Point to next train departure
    int platforms = 1;
    int maxPlatforms = 1;

    while (i < n && j < n)
    {
        if (arrivalSort[i] <= departureSort[j])
        {
            platforms++;
            i++;
        }
        else
        {
            platforms--;
            j++;
        }

        maxPlatforms = max(maxPlatforms, platforms);
    }
    cout << "Minimum platforms required: " << maxPlatforms;
    return 0;
}