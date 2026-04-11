#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[4] = {1, -3, 4, -7};

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < 0)
        {
            arr[i] = 0;
        }

        cout << arr[i] << " ";
    }
}