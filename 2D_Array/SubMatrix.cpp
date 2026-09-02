#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int startRow = 1;
    int startCol = 1;
    int subRows = 2;
    int subCols = 2;
    for (int i = startRow; i < startRow + subRows; i++)
    {
        for (int j = startCol; j < startCol + subCols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}