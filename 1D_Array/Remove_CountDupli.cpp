#include <iostream>
using namespace std;
int main()
{

    int arr[10] = {1, 2, 2, 4, 6};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        bool isduplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isduplicate = true;
                count += 1;
                break;
            }
        }
        if (!isduplicate)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\nTotal number of duplicate : " << endl;
    cout << count << endl;
    return 0;
}
