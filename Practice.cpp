// basic array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[4] = {1, 2, 3, 4};

//     cout << arr[0] << endl;
//     cout << arr[1] << endl;
//     cout << arr[2] << endl;
//     cout << arr[3] << endl;

//     return 0;
// }

// using loops

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// pass by reference

// #include <iostream>
// using namespace std;

// void changeArray(int arr[], int size)
// {
//     cout << "Change function" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = arr[i] * 2;
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {

//     int size = 5;
//     int arr[size] = {2, 4, 6, 8, 10};

//     cout << "Main function" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     changeArray(arr, size);

//     return 0;
// }

// linear search

// #include <iostream>
// using namespace std;

// int FindTarget(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {

//     int size = 4;
//     int target;
//     cout << "Enter a target : " << endl;
//     cin >> target;

//     int arr[size];
//     cout << "Enter a value of an array : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "The target is at idx : " << FindTarget(arr, size, target) << endl;
//     return 0;
// }

// Even odd

// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int CountEven = 0;
//     int CountOdd = 0;
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             CountEven += 1;
//         }
//         else
//         {
//             CountOdd += 1;
//         }
//     }

//     cout << "Even digits is : " << CountEven << endl;
//     cout << "Odd digits is : " << CountOdd << endl;

//     return 0;
// }

// smallest and largest number and difference b/w them

// #include <iostream>
// #include <climits>

// using namespace std;

// int main()
// {
//     int arr[5] = {2, 34, -55, 1, 6};
//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for (int i = 0; i < 5; i++)
//     {
//         smallest = min(arr[i], smallest);
//         largest = max(arr[i], largest);
//     }
//     cout << "Smallest no. is : " << smallest << endl;
//     cout << "largest no. is : " << largest << endl;

//     int difference = largest - smallest;

//     cout << "The difference between them is : " << difference << endl;

//     int smallvalue = smallest;
//     int largevalue = largest;

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == smallvalue)
//         {
//             cout << "The smallest value is at idx : " << i << endl;
//         }
//         else if (arr[i] == largevalue)
//         {
//             cout << "The largest value is at idx : " << i << endl;
//         }
//     }
// }

// Negative replace with zero

// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[5] = {3, 22, -3, 66, -2};
//     cout << "original array" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Modified array" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < 0)
//         {
//             arr[i] = 0;
//         }
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// greater than given number

// #include <iostream>
// using namespace std;

// int greatgiven(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > target)
//         {

//             cout << arr[i] << " ";
//         }
//     }
// }

// int main()
// {

//     int size = 4;
//     int target = 6;
//     int arr[size] = {12, 445, 67, 3};

//     cout << "Main array : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "The values greater than target" << endl;

//     greatgiven(arr, size, target);

//     return 0;
// }

// greater than average

// #include <iostream>
// using namespace std;

// int main()
// {

//     int size = 5;
//     int arr[size] = {12, 25, 355, 465, 665};

//     float sum = 0;

//     cout << "The values of array: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//         sum += arr[i];
//     }

//     float average = sum / size;
//     cout << "\nThe average of array : " << average << endl;
//     cout << "THe value of array which are greater than average : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > average)
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// reverse of an array

// #include <iostream>
// using namespace std;

// void ReverseArray(int arr[], int size)
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

//     int size;
//     cout << "Enter size " << endl;
//     cin >> size;

//     int arr[size];
//     cout << "Enter a values of array : " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     ReverseArray(arr, size);

//     cout << "The reverse of an array : " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// second largest number

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {

//     int arr[5] = {23, 44, 11, 66, 40};
//     int largest = INT_MIN;
//     int SecondLarge = INT_MIN;

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > largest)
//         {
//             SecondLarge = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > SecondLarge && arr[i] != largest)
//         {
//             SecondLarge = arr[i];
//         }
//     }
//     cout << "The largest number is : " << largest << endl;
//     cout << "The second largest number is : " << SecondLarge << endl;

//     return 0;
// }

// swap min max

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {

//     int arr[5] = {22, -11, 33, 55, 1};
//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//         smallest = min(smallest, arr[i]);
//         largest = max(largest, arr[i]);
//     }
//     cout << "\nThe value of array after swapping : " << endl;

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == smallest)
//         {
//             arr[i] = largest;
//         }
//         else if (arr[i] == largest)
//         {
//             arr[i] = smallest;
//         }

//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// count duplicate frequency

// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[5] = {1, 2, 3, 3, 1};

//     bool isduplicate = false;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[j] == arr[i])
//             {
//                 isduplicate = true;
//                 break;
//             }
//         }
//         if (!isduplicate)
//         {
//             int count = 0;
//             for (int j = 0; j < 5; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                 }
//             }
//             cout << arr[i] << " is " << count << " times " << endl;
//         }
//     }
//     return 0;
// }

// remove duplicacy

// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[10] = {1, 2, 4, 7, 4};

//     for (int i = 0; i < 5; i++)
//     {
//         bool isduplicate = false;
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 isduplicate = true;
//                 break;
//             }
//         }
//         if (!isduplicate)
//         {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }

// negative rep zero

// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[5] = {1, -2, 5, -4, 2};
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < 0)
//         {
//             arr[i] = 0;
//         }
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// linear search

// #include <iostream>
// using namespace std;

// int Targetfound(int arr[], int target)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {

//     int arr[5] = {11, 22, 43, 55, 6};
//     int target;
//     cout << "Enter a target" << endl;
//     cin >> target;

//     cout << "The target at idx : " << Targetfound(arr, target);
//     return 0;
// }

// second largest number

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int largest = INT_MIN;
//     int SecondLarge = INT_MIN;
//     int arr[5] = {21, 300, 44, 3, 45};
//     for (int i = 0; i < 5; i++)
//     {

//         if (arr[i] > largest)
//         {
//             SecondLarge = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > SecondLarge && arr[i] != largest)
//         {
//             SecondLarge = arr[i];
//         }
//     }
//     cout << SecondLarge << endl;

//     return 0;
// }

// smallest element

#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[5] = {2, 10, 40, 24, 5};
    int smallest = INT_MAX;
    int secsmall = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            secsmall = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secsmall && arr[i] != smallest)
        {
            secsmall = arr[i];
        }
    }
    cout << "The smallest values is : " << smallest << endl;
    cout << "The second smallest value is : " << secsmall << endl;

    return 0;
}