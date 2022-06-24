ListNode* middle(ListNode* head){
        ListNode *fast = head,*slow = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* rev(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;
        ListNode* mid = middle(head);
        ListNode* end = rev(mid);
        
        ListNode* curr = head;
        while(curr != NULL && end != NULL){
            if(curr != NULL && end != NULL && curr->val != end->val) return false;
            curr = curr->next;
            end = end->next;
        }
        return true;  
    }