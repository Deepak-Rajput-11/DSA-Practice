#include <iostream>
using namespace std;

int main()
{
    int arr[4][5] = {
        {1, 2, 1, 4, 8},
        {3, 7, 8, 5, 1},
        {8, 7, 7, 3, 1},
        {8, 1, 2, 7, 9}};

    for (int i = 0; i < 5; i++)
    {
        int element = arr[0][i];

        bool common = true;

        for (int r = 1; r < 4; r++)
        {
            bool foundInRow = false;

            for (int c = 0; c < 5; c++)
            {
                if (arr[r][c] == element)
                {
                    foundInRow = true;
                    break;
                }
            }

            if (foundInRow == false)
            {
                common = false;
                break;
            }
        }

        if (common == true)
        {
            cout << element << " ";
        }
    }

    return 0;
}