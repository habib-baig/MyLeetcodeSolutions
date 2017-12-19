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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t=head,*t1=head ;
       while(t!=NULL)
        {
            if(t->val==t1->val && t!=head)
            {
                t1->next=t->next;
                t=t->next;
            }
            else
            {
            t1=t;
            t=t->next;
            }
        }
        return head;
        
    }
};