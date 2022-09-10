/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *curr = head;
        ListNode *incr = head;
        if (curr->next == NULL)
            return NULL;
        for (int i = 0; i < n; i++)
        {
            if (incr->next == NULL)
            {
                if(n==i+1)
                    return head->next;
                else
                    return head;
            }
            incr = incr->next;
        }
        while (incr->next != NULL && curr != NULL)
        {
            incr = incr->next;
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};
// @lc code=end
