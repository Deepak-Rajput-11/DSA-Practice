#include <iostream>
using namespace std;
int main()
{
    string str = "programming";
    int freq[256] = {0};
    for (int i = 0; i < str.length(); i++)
    {

        freq[str[i]]++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (freq[str[i]] == 1)
        {
            cout << str[i];
            break;
        }
    }

    return 0;
}