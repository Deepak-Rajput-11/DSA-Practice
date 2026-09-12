#include <iostream>
using namespace std;
int main()
{
    string str = "programming";
    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        bool duplicate = false;
        for (int k = 0; k < i; k++)
        {
            if (str[i] == str[k])
            {
                duplicate = true;
                break;
            }
        }
        if (duplicate == true)
        {
            continue;
        }

        cout << str[i];
    }

    return 0;
}