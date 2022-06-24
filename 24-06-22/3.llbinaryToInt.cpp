int getDecimalValue(ListNode* head) {
        ListNode *temp = head;
        int res = 0;
        while(temp != NULL){
            res <<= 1;
            res |= temp->val;
            temp = temp->next;
        }
        return res;
    }