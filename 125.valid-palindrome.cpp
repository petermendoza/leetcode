#include <string>
#include <cctype>

using namespace std;
/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        
        while (start < end) { // Corrected loop condition
            while (start < end && !isalnum(s[start]))
                start++;
            while (start < end && !isalnum(s[end]))
                end--;
            if (tolower(s[start]) != tolower(s[end]))
                return false;
            else { // Added curly braces
                start++;
                end--;
            }
        }
        
        return true;
    }
};
// @lc code=end

