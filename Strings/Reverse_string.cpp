#include <iostream>
using namespace std;
int main()
{
    string str = "Deepak";
    int size = str.length();
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << str[i];
    }

    return 0;
}