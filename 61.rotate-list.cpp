/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* working = head;
        while(curr->next!=nullptr){
            working = curr;
            for(int i = 0; i < k; i++){
                if(working->next==nullptr){
                    working = head;
                }
                else
                    working = working->next;
            }
            curr->val = working->val;
        }
        return head;
    }
};
// @lc code=end

