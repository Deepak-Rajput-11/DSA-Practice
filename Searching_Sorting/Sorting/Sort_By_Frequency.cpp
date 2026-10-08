#include <iostream>
#include <map>
using namespace std;
int main()
{
    int arr[] = {2, 3, 2, 4, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (freq[arr[j]] < freq[arr[j + 1]] ||
                (freq[arr[j]] == freq[arr[j + 1]] && arr[j] > arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}