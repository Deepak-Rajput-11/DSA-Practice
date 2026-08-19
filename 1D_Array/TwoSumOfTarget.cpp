// Made himself code is running but it not correct code

// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[5] = {1, 3, 4, 5, 6};
//     int target = 7;

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] + arr[i + 1] == target)
//         {
//             cout << arr[i] << "+" << arr[i + 1] << endl;
//             cout << arr[i] + arr[i + 1] << endl;
//         }
//     }
//     return 0;
// }

// correct code

#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {2, 3, 4, 2, 5};
    int target = 10;

    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " + " << arr[j] << endl;
                found = true;
            }
        }
    }
    if (!found)
    {
        cout << "-1(Pair unavailable)" << endl;
    }
    return 0;
}