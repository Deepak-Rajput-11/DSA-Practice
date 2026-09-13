#include <iostream>
using namespace std;
int main()
{
    string str = "abca";
    char found;
    for (int i = 0; i < str.length(); i++)
    {
        bool alreadyAppear = false;
        for (int k = 0; k < i; k++)
        {
            if (str[k] == str[i])
            {
                alreadyAppear = true;
                found = str[i];
                break;
            }
        }
        if (alreadyAppear)
        {
            cout << "First Repeating character: " << found << " , at idx: " << i;
            break;
        }
    }

    return 0;
}