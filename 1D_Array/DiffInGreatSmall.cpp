#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int size;
    cout << "Enter a size : " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the values of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }

    for (int i = 0; i < size; i++)
    {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    cout << "The smallest digit : " << smallest << endl;
    cout << "The largest digit is : " << largest << endl;

    int Difference = largest - smallest;

    cout << "The difference between the largest and smallest digits of array : " << Difference << endl;
    return 0;
}