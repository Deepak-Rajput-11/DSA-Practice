#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int arr[5] = {2, 10, -40, 24, 5};
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