#include <iostream>
#include <map>
using namespace std;
int main()
{
    int arr1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int arr2[] = {2, 1, 8, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    map<int, int> freq;

    for (int i = 0; i < n1; i++)
    {
        freq[arr1[i]]++;
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < freq[arr2[i]]; j++)
        {
            cout << " " << arr2[i];
        }
        freq[arr2[i]] = 0;
    }

    for (auto pair : freq)
    {
        for (int j = 0; j < pair.second; j++)
        {
            cout << " " << pair.first;
        }
    }
    return 0;
}