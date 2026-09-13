#include <iostream>
using namespace std;
int main()
{
    string str = "I love C++";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '_';
        }
        cout << str[i];
    }
    return 0;
}