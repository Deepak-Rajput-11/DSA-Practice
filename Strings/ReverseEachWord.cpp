#include <iostream>
using namespace std;

int main()
{
    string str = "I love coding";

    int start = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            int end = i - 1;

            // Reverse from start to end
            while (start < end)
            {
                swap(str[start], str[end]);
                start++;
                end--;
            }

            // start should now move to beginning of next word
            start = i + 1;
        }
        }
    int end = str.length() - 1;

    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout << str;

    return 0;
}