#include <iostream>
using namespace std;
int main()
{
    string str = "abcde";
    string sub = "ace";
    int i = 0;
    int j = 0;

    while (i < str.length() && j < sub.length())
    {
        if (str[i] == sub[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if (j == sub.length())
    {
        cout << "Subsequence";
    }
    else
    {
        cout << "Not a subsequence";
    }
    return 0;
}