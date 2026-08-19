#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 1, 2, 4};

    for (int i = 0; i < 5; i++)
    {
        bool isduplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isduplicate = true;
                break;
            }
        }
        if (isduplicate)

            cout << arr[i] << " ";
    }

    return 0;
}