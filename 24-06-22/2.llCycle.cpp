bool hasCycle(ListNode *head) {
       if(head==NULL) return false;
       else if(head->next == NULL) return false;
       else{
           ListNode* fast = head,*slow = head;
           while(fast != NULL && fast->next != NULL){
               fast = fast->next->next;
               slow = slow->next;
               if(fast == NULL) break;
               if(fast == slow) return true;
               
           }
           return false;
       }
    }