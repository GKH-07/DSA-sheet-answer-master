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
    int length(ListNode* head)
    {
        int count = 0;
        while (head)
        {
        count++;
        head = head->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int n = length(head);
        if(head == NULL || n<k)
            return head;
        
        int org_n = k;
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *naxt = NULL;
        while(k-- && curr!= NULL)
        {
            naxt = curr->next;
            curr->next= prev;
            prev = curr;
            curr=naxt;
        }
        head->next = reverseKGroup(curr,org_n);
    return prev;    
    }
    
};

        // forward = curr->next;
        // curr->next = prev;
        // prev = curr;
        // curr = forward;