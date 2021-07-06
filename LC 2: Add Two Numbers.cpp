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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* t1= l1;
        ListNode* t2= l2;
        ListNode* curr;
        ListNode* head;
        int carry=0;
        while(!(t1==NULL and t2==NULL))
        {
            ListNode* temp = new ListNode();
            if(t1==NULL and t2!=NULL)
            {
                temp->val =(t2->val + carry)%10;
                carry = (t2->val + carry)/10;
            }
            else if(t1!=NULL and t2==NULL)
            {
                temp->val = (t1->val+carry)%10;
                carry = (t1->val + carry)/10;
            }
            else
            {
                temp->val = (t1->val + t2->val + carry)%10;
                carry = (t1->val + t2->val + carry)/10;
            }
            
            if(t1==l1 and t2==l2)
            {
               head = temp; 
               curr = temp;
            }
            
            else 
            {
              curr->next = temp;
              curr = curr->next;  
            }
            
            if(t1!=NULL)
            t1=t1->next;
            if(t2!=NULL)
            t2=t2->next;
        }
        
        if(carry!=0)
        {
            ListNode* temp = new ListNode(carry);
            curr->next = temp;
        }
        
        return head; 
    }
};
