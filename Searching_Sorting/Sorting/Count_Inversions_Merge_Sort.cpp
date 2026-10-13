// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 4, 1, 3, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int count = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 count++;
//             }
//         }
//     }
//     cout << "Total numbers of inversion are: " << count;
//     return 0;
// }

// Optimal approach
#include <iostream>
#include <vector>
using namespace std;
int merge(int arr[], int start, int mid, int end)
{

    int i = start;
    int j = mid + 1;
    int count = 0;

    vector<int> temp;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            count += mid - i + 1;
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++)
    {
        arr[start + k] = temp[k];
    }

    return count;
}

int mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return 0;
    }

    int mid = start + (end - start) / 2;

    int count = 0;

    count += mergeSort(arr, start, mid);
    count += mergeSort(arr, mid + 1, end);
    count += merge(arr, start, mid, end);

    return count;
}

int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int n = 5;

    int inversions = mergeSort(arr, 0, n - 1);
    cout << "Total inversions: " << inversions;
}