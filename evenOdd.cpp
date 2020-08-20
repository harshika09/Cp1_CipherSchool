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
    ListNode* oddEvenList(ListNode* head)
    {
        if(head==NULL||head->next==NULL)
            return head;
    ListNode * dummy=new ListNode(0);
        ListNode * ptr=head;
        ListNode * qtr=dummy;
        ListNode * rtr=NULL;
        int counter=1;
        while(ptr!=NULL)
        {
            rtr=ptr;
            qtr->next=ptr->next;
            qtr=qtr->next;
        
        if(qtr!=NULL)
        {
            ptr->next=qtr->next;
        }
        ptr=ptr->next;
    }
        rtr->next = dummy->next;
        return head;
    }
};
