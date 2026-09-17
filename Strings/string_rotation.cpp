#include <iostream>
using namespace std;
int main()
{
    string str1 = "abcd";
    string str2 = "cdab";

    if (str1.length() != str2.length())
    {
        cout << "Not a rotation";
        return 0;
    }

    string str3 = str1 + str1;

    bool found = false;
    for (int i = 0; i <= str3.length() - str2.length(); i++)
    {
        bool match = true;

        for (int j = 0; j < str2.length(); j++)
        {
            if (str3[i + j] != str2[j])
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            found = true;
            cout << "It is a rotation";
            break;
        }
    }
    if (!found)
    {
        cout << "Not a rotation";
    }
    return 0;
}