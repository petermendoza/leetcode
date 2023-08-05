/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.count(nums[i]) && abs(map[nums[i]] - i) <= k)
            {
                return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};
// @lc code=end
