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
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *cur1 = headA, *cur2 = headB;
    while(cur1 != cur2){
        cur1 = cur1?cur1->next:headB;
        cur2 = cur2?cur2->next:headA;
    }
    return cur1;
}
};