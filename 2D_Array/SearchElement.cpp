#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {8, 2, 15},
        {4, 11, 6},
        {9, 3, 20}};
    int target = 20;
    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                found = true;
                cout << "Element found at index: (" << i << ", " << j << ")";
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    if (found == false)
    {
        cout << "Element not found";
    }
}