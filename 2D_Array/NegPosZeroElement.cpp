#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, -2, 0},
        {-4, 5, 6},
        {0, -8, 9}};

    int positive = 0;
    int negative = 0;
    int zeros = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > 0)
            {
                positive++;
            }
            else if (arr[i][j] < 0)
            {
                negative++;
            }
            else
            {
                zeros++;
            }
        }
    }
    cout << "Positive Element: " << positive;
    cout << "\nNegative Element: " << negative;
    cout << "\nZeroes Element: " << zeros;
    return 0;
}