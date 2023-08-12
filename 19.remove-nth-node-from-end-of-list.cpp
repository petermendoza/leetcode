/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
 */


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// @lc code=start
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* end = temp;
        ListNode* start = temp;
        for(int i = 0; i <= n; i++){
            end = end->next;
        }
        while(end){
            end = end->next;
            start = start->next;
        }
        ListNode* del = start->next;
        start->next = del->next;
        delete del;
        return temp->next;
    }
};
// @lc code=end

