#include <string>
#include <stack>

using namespace std;

/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        for (char i : s)
        {
            if (i == '(' || i == '{' || i == '[')
            {
                stack.push(i);
            }
            else
            {
                if (stack.empty() || (stack.top() == '(' && i != ')') || (stack.top() == '{' && i != '}') || (stack.top() == '[' && i != ']'))
                    return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};
// @lc code=end
