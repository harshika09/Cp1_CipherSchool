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
     ListNode dummy(0);
        ListNode *itr = &dummy;
        int carry=0;
        int sum;
        ListNode * p=l1;
        ListNode * q=l2;
        while(p!=NULL||q!=NULL)
        {
            sum = (p == NULL? 0:p->val)+(q==NULL?0:q->val)+carry;
            carry=sum/10;
            sum=sum%10;
            itr->next = new ListNode(sum);
            itr=itr->next;
            if(p!=NULL)
                p=p->next;
            if(q!=NULL)
                q=q->next;
        }
        if(carry>0)
        {
            itr->next = new ListNode(carry);
        }
        return dummy.next;
    }
};
