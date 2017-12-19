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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=1;
        ListNode * second=head,*first=head;
        while(i<=n)
        {
            second=second->next;
            ++i;
        }
        if(second == NULL) return head->next;
        while(second->next!=NULL)
        {
            first=first->next;
            second=second->next;
        }
        first->next=first->next->next;
    return head;
    }
};