#include <iostream>
using namespace std;

int main()
{
    string str = "abcaef";

    int freq[256] = {0};
    int left = 0;
    int maxLength = 0;
    int start = 0;

    for (int right = 0; right < str.length(); right++)
    {
        freq[str[right]]++;

        while (freq[str[right]] > 1)
        {
            freq[str[left]]--; // remove left character from our count
            left++;            // move window forward
        }

        int currentLength = right - left + 1;

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
            start = left;
        }
    }
    cout << "Longest substring: " << str.substr(start, maxLength);
    cout << "\nLength: " << maxLength;
    return 0;
}