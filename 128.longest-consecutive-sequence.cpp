/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        unordered_map<int, bool> umap;
        sort(nums.begin(), nums.end());
        int ans = 0;
        int temp_count = 0;
        for (auto i : nums)
        {
            if (umap[i] != true)
            {
                umap[i] = true;
                if (umap[i - 1] == false)
                {
                    ans = max(ans, temp_count);
                    temp_count = 0;
                }
                temp_count++;
            }
        }
        return max(ans, temp_count);
    }
};
// @lc code=end
