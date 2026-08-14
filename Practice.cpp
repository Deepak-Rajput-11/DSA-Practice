// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 2, 4, 5, 1, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         bool duplicate = false;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 duplicate = true;
//                 break;
//             }
//         }
//         if (duplicate == true)
//         {
//             count++;
//         }
//     }
//     cout << count;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 22, 41, 221};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     bool sorted = true;
//     for (int i = 0; i < size - 1; i++)
//     {

//         if (arr[i] > arr[i + 1])
//         {
//             sorted = false;
//             break;
//         }
//     }
//     if (sorted == false)
//     {
//         cout << "Not sorted";
//     }
//     else
//     {
//         cout << "sorted";
//     }
//     return 0;
// }

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {12, 5, 271, 8, 919};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }
    cout << secondLargest;
    return 0;
}