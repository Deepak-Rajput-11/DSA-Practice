#include <iostream>
using namespace std;

int main()
{
    string str = "I am learning programming";

    int currentLength = 0;
    int maxLength = 0;
    int startIndex = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            currentLength++;
        }
        else
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                startIndex = i - currentLength;
            }

            currentLength = 0;
        }
    }

    if (currentLength > maxLength)
    {
        maxLength = currentLength;
        startIndex = str.length() - currentLength;
    }

    for (int i = startIndex; i < startIndex + maxLength; i++)
    {
        cout << str[i];
    }

    return 0;
}