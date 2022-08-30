/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l3 = new ListNode;
        ListNode* curr = l3;
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        while(list1!= NULL&&list2!= NULL)
        {
            int x = list1?list1->val:0;
            int y = list2?list2->val:0;
            if(x>=y)
            {
                curr->next=new ListNode(y);
                curr=curr->next;
                list2=list2?list2->next:nullptr;
            }
            else
            {
                curr->next=new ListNode(x);
                curr=curr->next;
                list1=list1?list1->next:nullptr;
            }
        }
        while(list1!= NULL)
        {
            int x = list1?list1->val:0;
            curr->next=new ListNode(x);
            curr=curr->next;
            list1=list1?list1->next:nullptr;
        }
        while(list2!= NULL)
        {
            int x = list2?list2->val:0;
            curr->next=new ListNode(x);
            curr=curr->next;
            list2=list2?list2->next:nullptr;
        }
        return l3->next;
    }
};
// @lc code=end

