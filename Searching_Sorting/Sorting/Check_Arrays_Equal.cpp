#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 5, 4, 0};
    int arr2[] = {2, 4, 5, 0, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    if (n1 != n2)
    {
        cout << "Array isn't equal";
    }
    else
    {
        for (int i = 0; i < n1 - 1; i++)
        {
            bool swapped = false;

            for (int j = 0; j < n1 - i - 1; j++)
            {

                if (arr1[j] > arr1[j + 1])
                {
                    int temp = arr1[j + 1];
                    arr1[j + 1] = arr1[j];
                    arr1[j] = temp;
                    swapped = true;
                }
            }
            if (!swapped)
            {
                break;
            }
        }

        for (int i = 0; i < n2 - 1; i++)
        {
            bool swapped = false;

            for (int j = 0; j < n2 - i - 1; j++)
            {

                if (arr2[j] > arr2[j + 1])
                {
                    int temp = arr2[j + 1];
                    arr2[j + 1] = arr2[j];
                    arr2[j] = temp;
                    swapped = true;
                }
            }
            if (!swapped)
            {
                break;
            }
        }

        bool equal = true;

        for (int i = 0; i < n1; i++)
        {
            if (arr1[i] != arr2[i])
            {
                equal = false;
                break;
            }
        }

        if (equal)
        {
            cout << "Arrays are equal";
        }
        else
        {
            cout << "Arrays aren't equal";
        }
    }

    return 0;
}