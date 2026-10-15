// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {5, 2, 6, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 count++;
//             }
//                 }
//         cout << count << " ";
//     }
//     return 0;
// }

// Optimal Approach

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<pair<int, int>> &elements,
           vector<int> &result,
           int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    int rightCount = 0;

    vector<pair<int, int>> temp;
    while (i <= mid && j <= end)
    {
        if (elements[i].first <= elements[j].first)
        {
            result[elements[i].second] += rightCount;
            temp.push_back(elements[i]);
            i++;
        }
        else
        {
            rightCount++;
            temp.push_back(elements[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        result[elements[i].second] += rightCount;
        temp.push_back(elements[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(elements[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++)
    {
        elements[start + k] = temp[k];
    }
}

void mergeSort(vector<pair<int, int>> &elements,
               vector<int> &result,
               int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(elements, result, start, mid);
    mergeSort(elements, result, mid + 1, end);

    merge(elements, result, start, mid, end);
}

int main()
{
    int arr[] = {5, 2, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<pair<int, int>> elements;
    for (int i = 0; i < n; i++)
    {
        elements.push_back({arr[i], i});
    }

    vector<int> result(n, 0);
    mergeSort(elements, result, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}