#include <iostream>
using namespace std;

int main()
{

    int size = 4;
    int arr[size] = {1, 4, 3, 5};
    int n = 5;

    int ExpectSum = n * (n + 1) / 2;

    int SumArr = 0;
    for (int i = 0; i < size; i++)
    {
        SumArr += arr[i];
    }

    int missing = ExpectSum - SumArr;

    cout << "Missing value : " << missing << endl;

    return 0;
}
