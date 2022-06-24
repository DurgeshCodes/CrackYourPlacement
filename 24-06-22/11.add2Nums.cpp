ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* res = new ListNode(0);
        ListNode* tail = res;
        while(l1 || l2){
            int dig1 = l1 ? l1->val : 0;
            int dig2 = l2 ? l2->val : 0;
            
            int abs_sum = carry + (dig1 + dig2);
            carry = abs_sum/10;
            ListNode* toInsert = new ListNode(abs_sum%10);
            tail->next = toInsert;
            tail = tail->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        if(carry != 0){
            ListNode* toInsert = new ListNode(carry);
            tail->next = toInsert;
        }
        return res->next;
    }