#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int arr2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    bool equal = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                equal = false;
                break;
            }
        }
    }
    if (equal == true)
    {
        cout << "Equal matrix";
    }
    else
    {
        cout << "Not-Equal matrix";
    }
    return 0;
}