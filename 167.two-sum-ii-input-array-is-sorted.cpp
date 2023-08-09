#include <vector>

using namespace std;
/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int j = 0;
        int k = numbers.size() - 1;
        while (numbers[j] + numbers[k] != target)
        {
            if ((numbers[j] + numbers[k]) < target)
            {
                j++;
            }
            else if ((numbers[j] + numbers[k]) > target)
            {
                k--;
            }
            else
                return {j + 1, k + 1};
        }
        return {j + 1, k + 1};
    }
};
// @lc code=end
