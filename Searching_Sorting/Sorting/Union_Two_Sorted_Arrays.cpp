#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 2, 3, 5};
    int arr2[] = {2, 3, 4, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> result(n1 + n2);
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2)
    {

        if (arr1[i] < arr2[j])
        {
            if (k == 0 || result[k - 1] != arr1[i])
            {
                result[k] = arr1[i];
                k++;
            }

            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            if (k == 0 || result[k - 1] != arr2[j])
            {
                result[k] = arr2[j];
                k++;
            }

            j++;
        }
        else
        {
            if (k == 0 || result[k - 1] != arr1[i])
            {
                result[k] = arr1[i];
                k++;
            }

            i++;
            j++;
        }
    }
    while (i < n1)
    {
        if (k == 0 || result[k - 1] != arr1[i])
        {
            result[k] = arr1[i];
            k++;
        }
        i++;
    }

    while (j < n2)
    {
        if (k == 0 || result[k - 1] != arr2[j])
        {
            result[k] = arr2[j];
            k++;
        }
        j++;
    }

    for (int i = 0; i < k; i++)
    {
        cout << " " << result[i];
    }
    return 0;
}
