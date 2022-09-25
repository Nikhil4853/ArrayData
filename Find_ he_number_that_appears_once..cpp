#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}
int main()
{
    vector<int> nums = {4, 11, 22, 36, 3, 6, 6, 36, 3};
    singleNumber(nums);
    return 0;
}
