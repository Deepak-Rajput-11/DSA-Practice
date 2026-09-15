#include <iostream>
using namespace std;
int main()
{
    string arr[] = {"flower", "flow", "flight"};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int j = 0; j < arr[0].length(); j++)
    {
        bool mismatch = false;
        char ch = arr[0][j];
        for (int i = 1; i < n; i++)
        {
            if (ch != arr[i][j])
            {
                mismatch = true;
                break;
            }
        }
        if (mismatch)
        {
            break;
        }
        cout << ch;
    }
    return 0;
}