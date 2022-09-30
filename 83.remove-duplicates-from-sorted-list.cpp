/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* l3 = head;
        ListNode* curr = l3;
        if(head==NULL)
            return head;
        int x = head->val;
        while(head!=NULL)
        {
            if(head->val==x)
            {
                head=head->next;
            }
            else
            {
                curr->next = new ListNode(head->val);
                curr=curr->next;
                x=head->val;
                head=head->next;
            }
        }
        curr->next=nullptr;
        return l3;
    }
};
// @lc code=end

