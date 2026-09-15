#include <iostream>
using namespace std;

int main()
{
    string str1 = "abcdef";
    string str2 = "zcdemf";

    int maxLength = 0;
    int startIndex = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = 0; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                int x = i;
                int y = j;

                while (x < str1.length() &&
                       y < str2.length() &&
                       str1[x] == str2[y])
                {
                    x++;
                    y++;
                }

                int length = x - i;

                if (length > maxLength)
                {
                    maxLength = length;
                    startIndex = i;
                }
            }
        }
    }

    for (int i = startIndex; i < startIndex + maxLength; i++)
    {
        cout << str1[i];
    }

    return 0;
}