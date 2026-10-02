#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr1[] = {1, 3};
    int arr2[] = {2, 4, 5};

    int n1 = 2;
    int n2 = 3;

    int start = 0;
    int end = n1;

    while (start <= end)
    {
        int cut1 = start + (end - start) / 2;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int left1, left2, right1, right2;

        if (cut1 == 0)
            left1 = INT_MIN;
        else
            left1 = arr1[cut1 - 1];

        if (cut1 == n1)
        {
            right1 = INT_MAX;
        }
        else
        {
            right1 = arr1[cut1];
        }

        if (cut2 == 0)
            left2 = INT_MIN;
        else
            left2 = arr2[cut2 - 1];

        if (cut2 == n2)
        {
            right2 = INT_MAX;
        }
        else
        {
            right2 = arr2[cut2];
        }

        if (left1 <= right2 && left2 <= right1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                double median =
                    (max(left1, left2) + min(right1, right2)) / 2.0;

                cout << median;
                break;
            }
            else
            {
                double median = max(left1, left2);

                cout << median;
                break;
            }
        }
        else if (left1 > right2)
        {
            end = cut1 - 1;
        }
        else
        {
            start = cut1 + 1;
        }
    }
    return 0;
}