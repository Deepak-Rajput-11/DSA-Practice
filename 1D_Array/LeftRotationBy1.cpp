#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    // For Left rotation

    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
        cout << arr[i] << " ";
    }
    arr[n - 1] = temp;
    cout << arr[n - 1] << endl;

    return 0;
}