#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int temp = arr[0][0];

    // Top row → move right
    for (int j = 1; j < 4; j++)
    {
        swap(temp, arr[0][j]);
    }

    // Right column → move down
    for (int i = 1; i < 4; i++)
    {
        swap(temp, arr[i][3]);
    }

    // Bottom row → move left
    for (int j = 2; j >= 0; j--)
    {
        swap(temp, arr[3][j]);
    }

    // Left column → move up
    for (int i = 2; i >= 1; i--)
    {
        swap(temp, arr[i][0]);
    }

    arr[0][0] = temp;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}