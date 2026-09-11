#include <iostream>
using namespace std;
int main()
{
    string original = "madam";
    int size = original.length();
    string reverse = "";

    for (int i = size - 1; i >= 0; i--)
    {
        reverse += original[i];
    }
    if (original == reverse)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
    return 0;
}