#include <iostream>
#include <string>
using namespace std;

int main()
{

    int size;
    cout << "Size of an array" << endl;
    cin >> size;

    int sum = 0;
    int product = 1;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "The sum of an array : " << sum << endl;
    cout << "The product of an array : " << product << endl;

    return 0;
}