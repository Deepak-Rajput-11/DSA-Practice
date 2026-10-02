#include <iostream>
using namespace std;
int main()
{
    int x = 36;
    int start = 0;
    int end = x;
    int get = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid == x)
        {
            get = mid;
            break;
        }
        else if (mid * mid < x)
        {
            get = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "The integer square root of " << x << " is " << get;
    return 0;
}