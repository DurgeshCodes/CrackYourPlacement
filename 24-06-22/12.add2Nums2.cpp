stack<int> ListToStack(ListNode* l){
        ListNode *curr = l;
        stack<int> st;
        while(curr != NULL){
            st.push(curr->val);
            curr = curr->next;
        }
        return st;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1 = ListToStack(l1);
        stack<int> s2 = ListToStack(l2);
        
        ListNode *res = NULL;
        int carry = 0;
        while(!s1.empty() || !s2.empty() || carry){
            int sum = 0;
            if(!s1.empty()){
                sum += s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                sum += s2.top();
                s2.pop();
            }
            
            sum += carry;
            carry = sum/10;
            ListNode *toInsert = new ListNode(sum%10);
            toInsert->next = res;
            res = toInsert;
        }
        
        return res;
    }