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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
    ListNode* prev;
    ListNode* next;
    ListNode* cur=head;
    ListNode* start;
    ListNode* end;
    
    int p=1;    
        while(p<=n)
        {
            if(p<m){
                //cout <<1<< endl;
                prev=cur;
                cur=cur->next;
                }
            else if(p==m)
                {
                //cout << 2 << endl;
                    start=prev;
                    end=cur;
                    prev=cur;
                    cur=cur->next;
                }
           else if(p>m && p<n)
                {
               //cout << 3 << endl;
                next=cur->next;
                cur->next=prev;
                prev=cur;
                cur=next;
                }
           else if(p==n)
                {
               //cout << 4<< endl;
                    
                    end->next=cur->next;
                    cur->next=prev;
                    if(m==1)
                    {
                        head=cur;
                    }
                    else
                    {
                    start->next=cur;
                    }     
           }
            p++;
        }
        //cout << 5<< endl;
               
        return head;
    
    }
};