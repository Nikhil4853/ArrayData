#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Interval
{
    int start, end;
};

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        vector<vector<int>> mergedInterval;

        if (intervals.size() == 0)
            return mergedInterval;

        sort(intervals.begin(), intervals.end());

        vector<int> tempInterval = intervals[0];

        for (auto it : intervals)
        {

            if (it[0] <= tempInterval[1])
                tempInterval[1] = max(it[1], tempInterval[1]);

            else
            {
                mergedInterval.push_back(tempInterval);
                tempInterval = it;
            }
        }

        mergedInterval.push_back(tempInterval);
        for (vector<int> vect1D : mergedInterval)
        {
            for (int x : vect1D)
            {
                cout << x << " ";
            }
            cout << endl;
        }

        return mergedInterval;
    }
};


int main()
{
    vector<vector<int>> vect{

        {9, 12},
        {4, 8},
        {1, 5},
        {11, 18},
        {19, 25},
        {26, 30},
        {28, 35}};
    //     Solution s;
    // s.merge(vect);
    for (vector<int> vect1D : vect)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}