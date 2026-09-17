#include <iostream>
using namespace std;

int main()
{
    string str = "datastructures";
    string sub = "structure";

    bool found = false;

    for (int i = 0; i <= str.length() - sub.length(); i++)
    {
        bool match = true;

        for (int j = 0; j < sub.length(); j++)
        {
            if (str[i + j] != sub[j])
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Substring found";
    }
    else
    {
        cout << "Substring not found";
    }

    return 0;
}