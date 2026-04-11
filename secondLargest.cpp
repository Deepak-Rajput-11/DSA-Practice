#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{

    int arr[5] = {22, 34, 11, 55, 67};
    int largest = INT_MIN;
    int secondLarge = INT_MIN;

    for (int i = 0; i < 5; i++)
    {

        if (arr[i] > largest)
        {
            secondLarge = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLarge && arr[i] != largest)
        {
            secondLarge = arr[i];
        }
    }

    cout << "The largest : " << largest << endl;
    cout << "The  second largest : " << secondLarge << endl;

    return 0;
}