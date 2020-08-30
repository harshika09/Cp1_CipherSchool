class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
    ListNode * fastPointer=head;
        ListNode * slowPointer=head;
        
        while(fastPointer)
        {
            if(fastPointer->next==NULL || fastPointer->next->next==NULL)
                return false;
            fastPointer=fastPointer->next->next;
            slowPointer=slowPointer->next;
            if(fastPointer->val==slowPointer->val)
            {
                return true;
            }
        }
        return false;
    }
};
