#include <vector>
#include <stack>
#include <algorithm>
#include <utility>
using namespace std;

/*
 * @lc app=leetcode id=853 lang=cpp
 *
 * [853] Car Fleet
 */

// @lc code=start
class Solution
{
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed)
    {
        stack<pair<int, int>> st;
        vector<pair<int, int>> combined;
        int count = 1;
        int ans = 0;
        for (int i = 0; i < position.size(); i++)
        {
            combined.push_back(make_pair(position[i], speed[i]));
        }
        sort(combined.begin(), combined.end());
        for (auto i : combined)
        {
            st.push(i);
        }
        while (!st.empty())
        {
            if ((st.top().second * count) + st.top().first >= target)
            {
                while ((st.top().second * count) + st.top().first >= target)
                {
                    st.pop();
                }
                ans++;
            }
            else
                count++;
        }
        return ans;
    }
};
// @lc code=end
