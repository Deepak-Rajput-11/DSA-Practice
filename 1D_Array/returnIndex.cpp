#include <iostream>
using namespace std;

int ReturnIndex(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
        else
        {
            continue;
        }
    }
    return -1;
}

int main()
{

    int arr[5] = {2, 1, 3, 4, 5};
    int key;
    cout << "Enter element : " << endl;
    cin >> key;

    cout << "The Idx of given element are : " << endl;
    cout << ReturnIndex(arr, 5, key) << " ";
    return 0;
}