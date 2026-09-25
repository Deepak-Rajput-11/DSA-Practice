#include <iostream>
using namespace std;
int main()
{
    int x = 25;
    int start = 1;
    int end = x;
    bool found = false;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid == x)
        {
            cout << "The square root of " << x << " is " << mid;
            found = true;
            break;
        }
        else if (mid * mid < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (!found)
    {
        cout << "Square root not found";
    }
    return 0;
}