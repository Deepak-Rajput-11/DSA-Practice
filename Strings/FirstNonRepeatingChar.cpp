#include <iostream>
using namespace std;
int main()
{
    string str = "aabbcddee";
    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
                }
        if (count == 1)
        {
            cout << str[i];
            break;
        }
    }
    return 0;
}