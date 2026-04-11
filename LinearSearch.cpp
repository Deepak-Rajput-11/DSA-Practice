#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int size;
    cout << "Enter the size : " << endl;
    cin >> size;

    int target;
    cout << "Enter a target : " << endl;
    cin >> target;

    int arr[size];
    cout << "Enter the values of array ; " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Target at index = " << LinearSearch(arr, size, target) << endl;

    return 0;
}