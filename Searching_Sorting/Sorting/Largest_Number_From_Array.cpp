#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {3, 30, 34, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<string> nums;
    for (int i = 0; i < n; i++)
    {
        nums.push_back(to_string(arr[i]));
    }

    sort(nums.begin(), nums.end(), [](string a, string b)
         { return a + b > b + a; });

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
    return 0;
}