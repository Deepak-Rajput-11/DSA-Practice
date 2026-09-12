#include <iostream>
using namespace std;

int main()
{
    string str1 = "listen";
    string str2 = "silent";

    bool anagram = true;

    if (str1.length() != str2.length())
    {
        anagram = false;
    }
    else
    {
        int n = str2.length();
        bool used[n] = {false};

        for (int i = 0; i < str1.length(); i++)
        {
            bool found = false;

            for (int j = 0; j < str2.length(); j++)
            {
                if (str1[i] == str2[j] && used[j] == false)
                {
                    found = true;
                    used[j] = true;
                    break;
                }
            }

            if (found == false)
            {
                anagram = false;
                break;
            }
        }
    }

    if (anagram)
    {
        cout << "Anagram";
    }
    else
    {
        cout << "Not Anagram";
    }

    return 0;
}