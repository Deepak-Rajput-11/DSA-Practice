#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-10, -10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }

    int product1 = arr[n - 1] * arr[n - 2] * arr[n - 3];

    int product2 = arr[0] * arr[1] * arr[n - 1];

    if (product1 > product2)
    {
        cout << "Largest Product is: " << product1;
    }
    else
    {
        cout << "Largest Product is: " << product2;
    }

    return 0;
}