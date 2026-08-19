#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a size of array" << endl;
    cin >> n;
    int num[n];
    int sum = 0;

    cout << "Enter the values of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += num[i];
    }

    cout << "Sum of array is : " << sum << endl;
    return 0;
}