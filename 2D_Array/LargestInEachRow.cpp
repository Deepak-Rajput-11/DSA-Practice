#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[3][3] = {
        {3, 8, 2},
        {7, 1, 9},
        {4, 6, 5}};
    for (int i = 0; i < 3; i++)
    {
        int largest = INT_MIN;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
        }
        cout << "Largest element in row " << i << " is " << largest << endl;
    }
    return 0;
}