Node* flatten(Node* head) {
        if(head == NULL) return NULL;
        stack<Node*> q;
        Node* curr = head;
        while(!q.empty() || curr->child || curr->next){
            if(curr->child){
                if(curr->next) q.push(curr->next);
                curr->next = curr->child;
                curr->child->prev = curr;
                curr->child = NULL;
            }
            else if(curr->next == NULL && !q.empty()){
                Node *temp = q.top();
                q.pop();
                curr->next = temp;
                temp->prev = curr;
            }
            if(curr->next) curr = curr->next;
        }
        return head;
    }