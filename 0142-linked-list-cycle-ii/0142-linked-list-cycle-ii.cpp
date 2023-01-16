/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next ==NULL)
             return  NULL;

        ListNode *slow = head;
        ListNode *fast = head;
        bool flag=false;
        while(fast !=NULL && slow!=NULL)
        {
            slow = slow -> next;
            if(fast->next==NULL)return NULL;
            fast=fast->next->next;
            if(slow==fast){flag =true;break;}
        }
        
        if(!flag)return NULL;
            slow = head;
            while(slow != fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            
        
        return slow;

    }
};