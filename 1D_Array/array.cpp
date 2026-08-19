// Basic of array

// #include<iostream>
// #include<string>
// using namespace std;

// int  main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     // cout << sizeof(arr) << endl;
//     // cout << arr[0] << endl;
//     // cout << arr[1] << endl;
//     // cout << arr[2] << endl;
//     // cout << arr[3] << endl;
//     // cout << arr[4] << endl;

//     return 0;
// }

// using loop in array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int arr[size];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }

// pass by reference

// #include <iostream>
// using namespace std;

// void changeArray(int arr[], int size)
// {
//     cout << "change function" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = 2 * arr[i];
//     }
// }

// int main()
// {

//     int size = 3;
//     int arr[] = {2, 3, 4};
//     changeArray(arr, 3);

//     cout << "Main function : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// linear search                        (There is the better way for this codein file[LinearSearch.cpp])

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int arr[] = {23, 44, 65, 7887, 22};
//     int target = 7887;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             cout << i << endl;
//         }
//         }

//     return 0;
// }

// average of array

// #include <iostream>
// using namespace std;

// int main()
// {

//     int TotalDigits = 5;
//     int sum = 0;
//     int arr[5] = {1, 2, 3, 4, 5};

//     for (int i = 0; i < TotalDigits; i++)
//     {

//         sum += arr[i];
//     }

//     int average = sum / TotalDigits;
//     cout << "Average of the array is : " << average << endl;

//     return 0;
// }

// reverse of an array

// #include <iostream>
// #include <string>
// using namespace std;

// void swapArray(int arr[], int size)
// {
//     int start = 0, end = size - 1;
//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main()
// {

//     int size = 5;
//     int arr[size] = {1, 2, 3, 4, 5};

//     cout << "The main array : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     swapArray(arr, size);

//     cout << endl
//          << "The reverse array : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// array is sorted or not

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 20, -44, 1, 3};

    cout << "Array before sorting " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array after sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}