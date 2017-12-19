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
        ListNode* temp=NULL,*temp1=NULL,*temp2=NULL;
        if(head==NULL || head->next==NULL) return head;
        temp=head;
        while(temp != NULL)
        {
            temp2=temp->next;
            temp->next=temp1;
            temp1=temp;
            temp=temp2;
        }
        return temp1;
    }
};