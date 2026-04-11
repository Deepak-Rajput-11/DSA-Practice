#include <iostream>
using namespace std;
int main()
{

    int arr[10] = {1, 2, 2, 1, 3};

    for (int i = 0; i < 5; i++)
    {
        bool isduplicate = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                isduplicate = true;
                break;
            }
        }
        if (!isduplicate)
        {
            int count = 0;
            for (int j = 0; j < 5; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
            cout << arr[i] << "->" << count << "times" << endl;
        }
    }

    return 0;
}
