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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int length = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            length++;
            temp = temp->next;
        }
        if(length - n == 0)
        {
            return head->next;
        }
        temp=head;
        for(int i=0;i<length-n-1;i++)
        {
            temp=temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};