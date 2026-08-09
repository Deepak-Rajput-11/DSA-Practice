// basic array

// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[5] = {1, 2, 3, 4, 5};
//     cout << arr[0] << endl;
//     cout << arr[1] << endl;
//     cout << arr[2] << endl;
//     cout << arr[3] << endl;
//     cout << arr[4] << endl;
//     return 0;
// }

// print the array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5];
//     cout << "Enter the value of array : " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Element of an array : " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << " " << arr[i];
//     }
//     return 0;
// }

// sum of array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5];
//     int sum = 0;
//     cout << "Enter the value of array : " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout << "Sum of an array : " << sum;
//     return 0;
// }

// print largest

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5];

//     cout << "Enter element of an array : " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     int largest = arr[0];
//     for (int i = 0; i < 5; i++)
//     {

//         if (largest < arr[i])
//         {
//             largest = arr[i];
//         }
//     }
//     cout << "largest element is : " << largest;
//     return 0;
// }

// average

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int arr[size] = {1, 2, 3, 4, 15};
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum = arr[i] + sum;
//     }
//     float average = sum / size;
//     cout << "Average of array : " << average;
//     return 0;
// }

// linear search

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {1, 2, 3, 11, 4};
//     int target = 121;
//     bool found = false;
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == target)
//         {
//             found = true;
//             break;
//         }
//     }
//     if (found)
//     {
//         cout << "elemnt found";
//     }
//     else
//     {
//         cout << "not found";
//     }
//     return 0;
// }

// second largest

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {

//     int size = 5;
//     int arr[size] = {-7, -16, -4, -19, -8};

//     int largest = arr[0];
//     //    int SecLargest = -1; // that should be the problem if array has the negative numbers so instead
//     int SecLargest = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > largest)
//         {
//             SecLargest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] < largest && arr[i] > SecLargest)
//         {
//             SecLargest = arr[i];
//         }
//     }
//     cout << "Largest is : " << largest << endl;
//     cout << "Second Largest is : " << SecLargest << endl;
//     return 0;
// }

// secand smallest

// #include <iostream>
// #include <climits>
// using namespace std;

// int main()
// {

//     int size = 5;
//     int arr[size] = {7, 16, 4, 19, 8};

//     int smallest = arr[0];
//     int secsmallest = -1;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             secsmallest = smallest;
//             smallest = arr[i];
//         }
//         else if (arr[i] > smallest && arr[i] < secsmallest)
//         {
//             secsmallest = arr[i];
//         }
//     }
//     cout << "Smallest is : " << smallest << endl;
//     cout << "Second smallest is : " << secsmallest << endl;
//     return 0;
// }

// count frequency

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {2, 1, 2, 3, 4};
//     int target = 20;
//     int count = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] == target)
//         {
//             count++;
//         }
//     }
//     if (count == 0)
//     {
//         cout << "Element not found";
//     }
//     else
//     {
//         cout << target << " appears " << count << " times";
//     }

//     return 0;
// }

// revrse of an array

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int left = 0;
//     int right = 4;
//     for (int i = 0; i < 5; i++)
//     {
//         while (left < right)
//         {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << " " << arr[i];
//     }
//     return 0;
// }

// sorted array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int arr[n];
//     bool sorted = true;
//     cout << "Enter the element of an array : " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             sorted = false;
//             break;
//         }
//     }
//     if (sorted == true)
//     {
//         cout << "Array Sorted";
//     }
//     else
//     {
//         cout << "Array Not Sorted";
//     }

//     return 0;
// }

// remove duplicate

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int arr[] = {1, 1, 2, 2, 4};

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[i - 1])
//         {
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }

// moves zero to end

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 5;
//     int arr[] = {1, 0, 2, 0, 1};
//     int j = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// missing numbers

// #include <iostream>
// using namespace std;

// int main()
// {

//         int n = 5;
//     int arr[] = {1, 2, 3, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int expectSum = n * (n + 1) / 2;
//     int givenSum = 0;

//     for (int i = 0; i < size; i++)
//     {
//         givenSum += arr[i];
//     }
//     int missingNum = expectSum - givenSum;

//     cout << "Missing Value is : " << missingNum;

//     return 0;
// }

// left rotation

// #include <iostream>
// using namespace std;

// int main()
// {

//     int size = 5;
//     int arr[] = {1, 2, 3, 4, 5};
//     int temp = arr[0];
//     for (int i = 0; i < size - 1; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     arr[size - 1] = temp;

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// left rotation by k

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int k = 2;
//     k = k % size;

//     reverse(arr, arr + k);
//     reverse(arr + k, arr + size);
//     reverse(arr, arr + size);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// count consecutive count

// #include <iostream>
// using namespace std;
// int main()
// {
//     int size = 5;
//     int arr[size] = {1, 0, 1, 1, 1, 0};
//     int count = 0;
//     int maxcount = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 1)
//         {
//             count++;
//             if (count > maxcount)
//             {
//                 maxcount = count;
//             }
//         }
//         else
//         {
//             count = 0;
//         }
//     }
//     cout << maxcount;
//     return 0;
// }

// largest of contiguous subarray

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int arr[] = {2, 1, 3, -4, 5};
//     int max = arr[0];

//     for (int i = 0; i < size; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < size; j++)
//         {
//             sum = sum + arr[j];
//             if (sum > max)
//             {
//                 max = sum;
//             }
//         }
//     }

//     cout << max;

//     return 0;
// }

// buy and sell stock

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {4, 1, 2, 4, 1, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int minprice = arr[0];
//     int maxprofit = 0;
//     int profit;
//     for (int i = 0; i < size; i++)
//     {
//         profit = arr[i] - minprice;
//         if (profit > maxprofit)
//         {
//             maxprofit = profit;
//         }
//         if (arr[i] < minprice)
//         {
//             minprice = arr[i];
//         }
//     }
//     cout << maxprofit;
//     return 0;
// }

// Kadane algorithm

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 3, -8, 7, -1, 2, 3};
//     int sum = 0;
//     int max = arr[0];
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//         if (sum > max)
//         {
//             max = sum;
//         }
//         if (sum < 0)
//         {
//             sum = 0;
//         }
//     }
//     cout << max;
//     return 0;
// }

// majority element

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 2, 11, 3, 2, 2};  // only works on odd number of element
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int n = size / 2;
//     for (int i = 0; i < size; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }
//         if (count > n)
//         {
//             cout << arr[i];
//             break;
//         }
//     }

//     return 0;
// }

// Missing element

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int arr[n] = {0, 2, 1, 5, 3};
//     int Actualsum = n * (n + 1) / 2;
//     int avaSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         avaSum += arr[i];
//     }
//     int missingvalue = Actualsum - avaSum;
//     cout << missingvalue;
//     return 0;
// }

// Two Element sum

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 1, 3, 4, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 7;
//     bool found = false;
//     for (int i = 0; i < size; i++)
//     {

//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 found = true;
//                 cout << "The sum of : " << arr[i] << " & " << arr[j] << " = " << target;
//                 break;
//             }
//         }
//     }
//     if (found == false)
//     {
//         cout << "No pair available";
//     }
//     return 0;
// }

// moves all zeroes to end

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {0, 1, 2, 0, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int j = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] != 0)
//         {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << " " << arr[i];
//     }
//     return 0;
// }

// intersection in arrays

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1 = 5;
//     int n2 = 5;
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {3, 4, 5, 3, 7};
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 cout << " " << arr1[i];
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// leader of an array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {21, 332, 11, 44, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[n - 1];

    int leaders[n];
    int count = 0;

    // Last element is always a leader
    leaders[count++] = arr[n - 1];

    // Find remaining leaders from right to left
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > largest)
        {
            leaders[count++] = arr[i];
            largest = arr[i];
        }
    }

    // Print leaders in original order
    for (int i = count - 1; i >= 0; i--)
    {
        cout << leaders[i] << " ";
    }

    return 0;
}