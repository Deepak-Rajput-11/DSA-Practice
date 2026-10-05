#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> res(n1 + n2);
    int k = 0;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            res[k] = arr1[i];
            k++;
            i++;
        }

        else
        {
            res[k] = arr2[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {

        res[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        res[k] = arr2[j];
        k++;
        j++;
    }

    for (int i = 0; i < n1 + n2; i++)
    {
        cout << " " << res[i];
    }

    return 0;
}