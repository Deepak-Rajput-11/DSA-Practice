#include <iostream>
#include <climits>
using namespace std;
int main()
{
    string str = "success";
    int max = INT_MIN;
    char maxChar;
    for (int i = 0; i < str.length(); i++)
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
        int count = 0;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            maxChar = str[i];
        }
    }
    cout << "Most frequent character: " << maxChar << endl;
    cout << "Frequency: " << max;

    return 0;
}