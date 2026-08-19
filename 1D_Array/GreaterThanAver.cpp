#include <iostream>
using namespace std;

int main()
{

    int TotalDigits = 5;
    int sum = 0;
    int GreatCount = 0;
    int arr[5] = {155, 225, 30, 42, 532};

    for (int i = 0; i < TotalDigits; i++)
    {
        sum += arr[i];
    }

    float average = (float)sum / TotalDigits;
    cout << "Average of the array is : " << average << endl;

    for (int i = 0; i < TotalDigits; i++)
    {
        if (arr[i] > average)
        {
            GreatCount += 1;
        }
    }

    cout << "Total number that was greater than average is = " << GreatCount << endl;

    return 0;
}