#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        bool duplicate = false;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }
        if (duplicate == true)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
