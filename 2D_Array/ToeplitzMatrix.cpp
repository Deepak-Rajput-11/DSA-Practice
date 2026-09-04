#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {6, 5, 1, 2}};

    bool Toeplitz = true;
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (arr[i][j] != arr[i - 1][j - 1])

            {
                Toeplitz = false;
                break;
            }
        }
    }
    if (Toeplitz == true)
    {
        cout << "Toeplitz Matrix";
    }
    else
    {
        cout << "Non Toeplitz Matrix";
    }
    return 0;
}