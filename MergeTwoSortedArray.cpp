#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k = 0;
    int result[n1 + n2];
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {

        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            result[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        result[k] = arr2[j];
        j++;
        k++;
    }
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << " " << result[i];
    }
    return 0;
}