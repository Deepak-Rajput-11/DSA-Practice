#include <iostream>
using namespace std;

int main()
{
    string str = "aaabbccccd";

    for (int i = 0; i < str.length(); i++)
    {
        int count = 1;

        while (i + 1 < str.length() && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        cout << str[i] << count;
    }

    return 0;
}