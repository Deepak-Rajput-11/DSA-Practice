#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int num[n] = {23, 44, 65, 7, 88};
    int countEven = 0;
    int countOdd = 0;

    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            countEven += 1;
        }
        else
        {
            countOdd += 1;
        }
    }

    cout << "Total Even Digits in Number is = " << countEven << endl;
    cout << "Total Odd Digits in Number is = " << countOdd << endl;

    return 0;
}