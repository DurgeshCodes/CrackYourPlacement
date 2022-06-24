ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* head = new ListNode(101);
       ListNode* tail = head;
        
       while(list1 != NULL && list2 != NULL){
           if(list1->val <= list2->val){
               tail->next = list1;
               list1 = list1->next;
               tail = tail->next;
           }
           else if(list1->val > list2->val){
               tail->next = list2;
               list2 = list2->next; 
               tail = tail->next;
           }
       }
        while(list1 != NULL){
           tail->next = list1;
           list1 = list1->next;
           tail = tail->next;
        }
         while(list2 != NULL){
           tail->next = list2;
           list2 = list2->next;
           tail = tail->next;
        }
        
        return head->next;
    }