// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[]{1, 3, 5, 2, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         int LeftSum = 0;
//         int RightSum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             LeftSum += arr[j];
//         }
//         for (int j = i + 1; j < n; j++)
//         {
//             RightSum += arr[j];
//         }
//         if (LeftSum == RightSum)
//         {
//             cout << "Equilibrium index: " << i;
//             break;
//         }
//     }
//     return 0;
// }

//

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
    }
    int leftsum = 0;
    for (int i = 0; i < n; i++)
    {

        int rightsum = totalsum - leftsum - arr[i];

        if (leftsum == rightsum)
        {
            cout << "Equilbrium index: " << i;
            break;
        }
        leftsum += arr[i];
    }
    return 0;
}