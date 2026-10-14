// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 3, 2, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] > 2LL * arr[j])
//             {
//                 count++;
//             }
//         }
//     }
//     cout << "Reverse Pairs: " << count;
//     return 0;
// }

// Optimal Approach

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{

    int i = start;
    int j = mid + 1;

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
}
int countPairs(int arr[], int start, int mid, int end)
{
    int count = 0;
    int j = mid + 1;

    for (int i = start; i <= mid; i++)
    {
        while (j <= end && arr[i] > 2LL * arr[j])
        {
            j++;
        }

        count += j - (mid + 1);
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

    count += countPairs(arr, start, mid, end);

    merge(arr, start, mid, end);

    return count;
}

int main()
{
    int arr[] = {1, 3, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;

    int pairs = mergeSort(arr, start, end);
    cout << "Total Reverse pairs: " << pairs;

    return 0;
}