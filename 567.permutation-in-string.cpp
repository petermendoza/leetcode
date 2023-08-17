#include <string>
#include <unordered_map>

using namespace std;

/*
 * @lc app=leetcode id=567 lang=cpp
 *
 * [567] Permutation in String
 */

// @lc code=start
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        unordered_map<char, int> s1map;
        unordered_map<char, int> s2map;
        int start = 0;
        for (auto i : s1)
        {
            s1map[i] += 1;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if (s1map[s2[i]] > 0)
            {
                s2map[s2[i]]++;
                while (s1map[s2[i]] < s2map[s2[i]])
                {
                    s2map[s2[start]]--;
                    start++;
                }
                if (i - start + 1 == s1.size())
                {
                    return true;
                }
            }
            else
            {
                s2map.clear();
                start = i + 1;
            }
        }

        return false;
    }
};
// @lc code=end
