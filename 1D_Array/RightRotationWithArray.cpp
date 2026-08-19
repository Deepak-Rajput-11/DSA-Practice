#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int k = 1;
    int arr[n] = {1, 2, 3, 4, 5};
    int New[n];

    for (int i = 0; i < n; i++)
    {
        New[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << New[i] << " ";
    }

    return 0;
}