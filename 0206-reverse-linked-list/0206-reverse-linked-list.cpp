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
    void reverse(ListNode* curr,ListNode* prev,ListNode* &head)
    {
        if(curr == NULL)
        {       
            head = prev;
            return;
        }
        ListNode* forward = curr->next;
        
        curr->next = prev;
        
        reverse(forward,curr,head);
        // prev = curr;
        // curr = forward;
        
        
    }
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        reverse(curr,prev,head);
        return head;
        
    }
};