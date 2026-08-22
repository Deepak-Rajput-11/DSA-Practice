#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[3][3] = {
        {8, 2, 15},
        {4, -11, 6},
        {9, 3, 20}};
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }
    cout << "Largest element: " << largest;
    cout << "\nSmallest element: " << smallest;
    return 0;
}