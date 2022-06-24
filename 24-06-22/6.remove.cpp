ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        ListNode* temp = new ListNode(-1);
        temp->next = head;
        ListNode *curr = temp;
        while(curr != NULL){
            if(curr->next!= NULL && curr->next->val == val){
                curr->next = curr->next->next;
            }
            else curr = curr->next;
        }
        
        return temp->next;
    }