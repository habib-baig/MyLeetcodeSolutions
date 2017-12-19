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
    ListNode* reverse_l(ListNode* head)
    {
        ListNode * prev=NULL, *next, *cur=head;
        while(cur)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head, *first=head,*second=NULL;
        if(head == nullptr) return true;
        if(head->next == NULL) return true;
        int count=0,t_count;
        while(temp)
        {
            temp=temp->next;
            ++count;
        }
        cout << count << endl;
        temp=head;
        t_count=count;
        while(t_count > count/2)
        {
            temp=temp->next;
            t_count--;
        }
        cout << temp->val;
        second=reverse_l(temp);
        
        while(second && first)
        {
            if (first->val != second->val)
                return false;
            first=first->next;
            second=second->next;
        }
        return true;
    }
};