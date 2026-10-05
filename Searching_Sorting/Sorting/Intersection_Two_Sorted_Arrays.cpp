#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> res(min(n1, n2));
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] == arr2[j])
        {
            // common element
            res[k] = arr1[i];
            k++;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        cout << " " << res[i];
    }
    return 0;
}