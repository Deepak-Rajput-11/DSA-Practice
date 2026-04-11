#include <iostream>
using namespace std;

void changeArray(int arr[], int size)
{
    cout << "change function" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{

    int size = 3;
    int arr[] = {2, 3, 4};
    changeArray(arr, 3);

    cout << "Main function : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}