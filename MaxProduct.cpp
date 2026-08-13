#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {2, 1, 7, 5, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    int secLargest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secLargest)
        {
            secLargest = arr[i];
        }
    }
    int MaxProduct = largest * secLargest;
    cout << "The maximum product is : " << MaxProduct;
    return 0;
}