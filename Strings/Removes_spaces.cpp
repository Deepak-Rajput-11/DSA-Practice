#include <iostream>
using namespace std;
int main()
{
    string str = "Data Structures And Algorithms";
    string result = "";
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        result += str[i];
    }
    cout << result;
    return 0;
}