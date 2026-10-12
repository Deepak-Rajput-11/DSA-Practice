#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<vector<int>> intervals = {
        {1, 3},
        {2, 6},
        {8, 10},
        {9, 12},
        {15, 18}};

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;
    merged.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++)
    {

        if (intervals[i][0] <= merged.back()[1])
        {
            merged.back()[1] = max(merged.back()[1], intervals[i][0]);
        }
        else
        {
            merged.push_back(intervals[i]);
        }
    }

    for (int i = 0; i < merged.size(); i++)
    {
        cout << merged[i][0] << " " << merged[i][1] << endl;
    }
    return 0;
}