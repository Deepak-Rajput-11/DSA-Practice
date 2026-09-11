#include <iostream>
using namespace std;
int main()
{
    string str = "banana";
    int size = str.length();

    for (int i = 0; i < size; i++)
    {
        bool alreadyCounted = false;

        for (int k = 0; k < i; k++)
        {
            if (str[k] == str[i])
            {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted)
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        cout << str[i] << " appears " << count << " times" << endl;
    }
    return 0;
}