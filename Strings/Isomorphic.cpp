#include <iostream>
using namespace std;
int main()
{
    string str1 = "egg";
    string str2 = "add";

    if (str1.length() != str2.length())
    {
        cout << "Not an Isomorphic";
        return 0;
    }

    char map1[256] = {0};
    char map2[256] = {0};
    for (int i = 0; i < str1.length(); i++)
    {
        if (map1[str1[i]] == 0 && map2[str2[i]] == 0)
        {
            map1[str1[i]] = str2[i];
            map2[str2[i]] = str1[i];
        }
        else if (map1[str1[i]] != str2[i] ||
                 map2[str2[i]] != str1[i])
        {
            cout << "Not Isomorphic";
            return 0;
        }
    }

    cout << "Isomorphic";

    return 0;
}