#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        for (int i = 0; i < floor(s.size() / 2); i++)
        {
            swap(s[i], s[s.size() - 1 - i]);
        }
    }
};
// @lc code=end
