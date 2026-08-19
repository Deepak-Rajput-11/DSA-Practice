#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[5] = {22, 33, 11, 44, 55};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    cout << "The current array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout << "The array are swap of MAX and MIN num : " << endl;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == smallest)
        {
            arr[i] = largest;
        }
        else if (arr[i] == largest)
        {
            arr[i] = smallest;
        }

        cout << arr[i] << " ";
    }

    return 0;
}