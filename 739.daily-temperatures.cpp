/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start
class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> answer;
        stack<int> st;
        int count = 0;
        for (int i = temperatures.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() < temperatures[i])
            {
                count++;
                st.pop();
            }
            if (st.empty())
            {
                answer.push_back(0);
            }
            else
                answer.push_back(count);

            count = 0;
            st.push(temperatures[i]);
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
// @lc code=end
