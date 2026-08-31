#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int d = 0; d < 5; d++)
    {
        for (int i = 0; i < 3; i++)
        {
            int j = d - i;

            if (j >= 0 && j < 3)
            {
                cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }
    return 0;
}