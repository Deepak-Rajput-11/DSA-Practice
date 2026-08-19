#include <iostream>
using namespace std;

int CountNum(int arr[], int given)
{
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == given)
        {
            count += 1;
        }
    }
    return count;
}
int main()
{

    int arr[9] = {2, 2, 4, 55, 44, 22, 55, 55, 2};
    int given;
    cout << "Enter the element : " << endl;
    cin >> given;

    cout << "The number of time this element available is ";
    cout << CountNum(arr, given) << endl;
    return 0;
}