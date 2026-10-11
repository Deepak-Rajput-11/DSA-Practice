#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    sort(arr, arr + n, [&](int a, int b)
         {
             if (freq[a] == freq[b])
             {
                 return a > b;
             }

             return freq[a] < freq[b]; });

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}