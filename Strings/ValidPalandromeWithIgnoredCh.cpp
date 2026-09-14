// #include <iostream>
// using namespace std;
// int main()
// {
//     string str = "A man, a plan, a canal: Panama";
//     string str1 = "";
//     string result = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (isalnum(str[i]))
//         {
//             str1 += tolower(str[i]);
//         }
//     }

//     for (int i = str1.length() - 1; i >= 0; i--)
//     {
//         result += str1[i];
//     }

//     if (str1 == result)
//     {
//         cout << "Palindrome";
//     }
//     else
//     {
//         cout << "Not Palindrome";
//     }
//     return 0;
// }

// Better approach(time : o(n) and space : O(1))

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str = "A man, a plan, a canal: Panama";

    int start = 0;
    int end = str.length() - 1;
    bool palindrome = true;

    while (start < end)
    {
        // Ignore spaces and punctuation from left
        if (!isalnum(str[start]))
        {
            start++;
            continue;
        }

        // Ignore spaces and punctuation from right
        if (!isalnum(str[end]))
        {
            end--;
            continue;
        }

        // Compare characters while ignoring uppercase/lowercase
        if (tolower(str[start]) != tolower(str[end]))
        {
            palindrome = false;
            break;
        }

        start++;
        end--;
    }

    if (palindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}