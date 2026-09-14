#include <iostream>
using namespace std;
int main()
{
    string str = "datastructures";
    string sub = "structure";

    for (int i = 0; i < sub.length(); i++)
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
            cout << "Substring found";
            break;
        }
    }
    if (!match)
    {
        cout << "Sunstring not found";
    }

    return 0;
}