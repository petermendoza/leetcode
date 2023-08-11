#include <string>
#include <unordered_map>

using namespace std;
/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        int ans=0;
        int j=0;
        unordered_map<char,bool> map;
        for(int i = 0; i < s.size(); i++){
            if(!map.count(s[i])){
                count++;
                map[s[i]] = true;
            }
            else{
                if(count>ans)
                    ans = count;
                while(s[j]!=s[i]) {
                    count--;
                    map.erase(s[j]);
                    j++;
                }
                j++;
            }
        }
        return max(ans,count);
    }
};
// @lc code=end

