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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int i=0, temp,carry=0,flag=0,len;
        ListNode *l=new ListNode(0);
        ListNode *l3=l;
        
        while (l1!=NULL && l2!=NULL)
        {
            temp=l1->val+l2->val+carry;
            if(temp > 9)
            {
                carry=temp/10;
                l->val=temp%10;
            }
            else
            {
                carry=0;
                l->val=temp;
            }
            if(l1->next !=NULL && l2->next !=NULL)
            {
            l->next=new ListNode(0);
            l=l->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        flag=0;
        while (l1!=NULL)
        {
            if( flag == 0)
            {
                l->next=new ListNode(0);
                l=l->next;
                flag=1;
            }
            temp=l1->val+carry;
            if(temp > 9)
            {
                carry=temp/10;
                l->val=temp%10;
            }
            else
            {
                carry=0;
                l->val=temp;
            }
            if(l1->next !=NULL)
            {
            l->next=new ListNode(0);
            l=l->next;
            }
            l1=l1->next;
        }
        flag=0;
        while (l2!=NULL)
        {
            if( flag == 0)
            {
                l->next=new ListNode(0);
                l=l->next;
                flag=1;
            }
            temp=l2->val+carry;
            if(temp > 9)
            {
                carry=temp/10;
                l->val=temp%10;
            }
            else
            {
                carry=0;
                l->val=temp;
            }
            if(l2->next !=NULL)
            {
            l->next=new ListNode(0);
            l=l->next;
            }
            l2=l2->next;
        }
        if(carry>0)
        {
          l->next=new ListNode(0);
            l=l->next;
            l->val=carry;
        }
        l->next=NULL;
    return l3;
    }
    
};