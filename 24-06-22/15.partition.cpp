 ListNode* partition(ListNode* head, int x) {
       ListNode* small = new ListNode(0);
       ListNode* large = new ListNode(0); 
       
        ListNode *smallTail = small,*largeTail = large;
        
        while(head){
            if(head->val < x){
                smallTail->next = head;
                smallTail = smallTail->next;
            }
            else{
                largeTail->next = head;
                largeTail = largeTail->next;
            }
            head = head->next;
        }
        largeTail->next = NULL;
        smallTail->next = large->next;
        return small->next;
    }