#include <iostream>
#include <string>
using namespace std;

void swapArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{

    int arr[5] = {1, 22, 33, 4, 2};

    cout << "The current array : " << endl;

    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    swapArray(arr, 5);

    cout << "The reverse array : " << endl;

    for (int i = 0; i < 5; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}