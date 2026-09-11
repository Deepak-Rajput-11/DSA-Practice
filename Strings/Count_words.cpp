#include <iostream>
using namespace std;
int main()
{
    string str = "I am learning C++ DSA";
    int size = str.length();

    int spaces = 0;
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            spaces++;
        }
        }
    int count = spaces + 1;
    cout << "Number of words: " << count;
    return 0;
}