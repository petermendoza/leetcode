#include <vector>
#include <iostream>
using namespace std;
/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int ans = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                nums[ans] = nums[i];
                ans++;
            }
        }
        return ans;
    }
};
// @lc code=end
