#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    // string sentance;

    // getline(cin, sentance);
    // cout << sentance;

    // string str = "Deepak";

    // cout << "Length of string: " << str.length();

    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout << str[i] << endl;
    // }

    // str[0] = 'R';
    // cout << str;

    // string a = "Data";
    // string b = "Structures";

    // string full = a + " " + b;
    // cout << full;

    // string word1;
    // string word2;

    // getline(cin, word1);
    // getline(cin, word2);

    // if (word1 == word2)
    // {
    //     cout << "Words are equal";
    // }
    // else
    // {
    //     cout << "Words are not equal";
    // }

    // string name;
    // getline(cin, name);

    // if (name.empty())
    // {
    //     cout << "String is empty";
    // }
    // else
    // {
    //     cout << "Not empty string";
    // }

    // string str = "Deepak123";
    // int alphaCount = 0;
    // int digitCount = 0;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (isalpha(str[i]))
    //     {
    //         alphaCount++;
    //     }
    //     else if (isdigit(str[i]))
    //     {
    //         digitCount++;
    //     }
    // }
    // cout << "Alphabets: " << alphaCount;
    // cout << "\nDigits: " << digitCount;

    // string str = "DeePAK";
    // int upper = 0;
    // int lower = 0;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (isupper(str[i]))
    //     {
    //         upper++;
    //     }
    //     else if (islower(str[i]))
    //     {
    //         lower++;
    //     }
    // }
    // cout << "uppercase: " << upper;
    // cout << "\nlowercase: " << lower;

    // string str = "Deepak";

    // for (int i = 0; i < str.length(); i++)
    // {
    //     str[i] = toupper(str[i]);
    // }
    // cout << str;
    // cout << endl;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     str[i] = tolower(str[i]);
    // }
    // cout << str;

    // string str = "EdUcAtIoN";
    // for (int i = 0; i < str.length(); i++)
    // {
    //     str[i] = tolower(str[i]);
    // }
    // int vowelcount = 0;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] == 'a' ||
    //         str[i] == 'e' ||
    //         str[i] == 'i' ||
    //         str[i] == 'o' ||
    //         str[i] == 'u')
    //     {
    //         vowelcount++;
    //     }
    // }
    // cout << "Total vowels: " << vowelcount;

    string str = "Hello World 123";
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }

    int vowelcount = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u')
        {
            vowelcount++;
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
        else if (isalpha(str[i]))
        {
            consonants++;
        }
    }
    cout << "vowels: " << vowelcount;
    cout << "\ndigits: " << digits;
    cout << "\nspaces: " << spaces;
    cout << "\nconsonants: " << consonants;
    return 0;
}