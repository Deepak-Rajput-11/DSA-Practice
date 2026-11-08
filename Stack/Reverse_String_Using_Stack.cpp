#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str;
    stack<char> s;

    cout << "Enter String: " << endl;
    cin >> str;

    // Push Operation
    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    // Reverse String
    string reversed = "";

    while (!s.empty())
    {
        reversed += s.top();
        s.pop();
    }

    cout << "Reversed String: " << reversed;
    return 0;
}