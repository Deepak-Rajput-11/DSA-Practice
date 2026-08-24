#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}};
    bool symmetric = true;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                symmetric = false;
                break;
            }
        }
        if (symmetric == false)
        {
            break;
        }
    }
    if (symmetric == true)
    {
        cout << "Matrix is symmetric";
    }
    else
    {
        cout << "Matrix is not symmetric";
    }
    return 0;
}