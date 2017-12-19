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
    ListNode* reverseList(ListNode* head) {
        ListNode* cur=NULL,*previous=NULL,*next=NULL;
        if(head==NULL || head->next==NULL) return head;
        cur=head;
        while(cur != NULL)
        {
            next=cur->next;
            cur->next=previous;
            previous=cur;
            cur=next;
        }
        return previous;
    }
};