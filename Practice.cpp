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

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {12, 5, 271, 8, 919};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int smallest = arr[0];
//     int secondsmallest = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             secondsmallest = smallest;
//             smallest = arr[i];
//         }
//         else if (arr[i] > smallest && arr[i] < secondsmallest)
//         {
//             secondsmallest = arr[i];
//         }
//     }
//     cout << secondsmallest;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int temp = arr[0];
//     for (int i = 0; i < n - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = temp;
//     for (int i = 0; i < n; i++)
//     {
//         cout << " " << arr[i];
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {16, 17, 4, 3, 5, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int maxRight = arr[n - 1];
//     int arr1[n];
//     int count = 0;

//     arr1[count] = maxRight;
//     count++;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (arr[i] > maxRight)
//         {
//             arr1[count] = arr[i];
//             count++;
//             maxRight = arr[i];
//         }
//     }
//     for (int i = count - 1; i >= 0; i--)
//     {
//         cout << arr1[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <climits>

// using namespace std;
// int main()
// {
//     int arr[] = {7, 2, 9, 4, 9, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int largest = arr[0];
//     int seclargest = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             seclargest = largest;
//             largest = arr[i];
//         }
//         if (arr[i] > seclargest && arr[i] < largest)
//         {
//             seclargest = arr[i];
//         }
//     }
//     cout << seclargest;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}