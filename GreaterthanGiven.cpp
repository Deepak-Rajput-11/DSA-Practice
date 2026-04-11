#include <iostream>
using namespace std;

int GreatSearch(int arr[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > target)
        {
            count += 1;
        }
    }
    return count;
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

    cout << "Total number greater than target is  = " << GreatSearch(arr, size, target) << endl;

    return 0;
}