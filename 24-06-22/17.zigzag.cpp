
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *root)
{
	Node *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
 

 // } Driver Code Ends
/*

The structure of linked list is the following
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

class Solution
{
    public:
    Node *zigZag(Node* head){
        if(!head || !head->next) return head;
     Node *curr = head;
    bool flag = true;
        while(curr){
            if(flag){
                if(curr->next && curr->data > curr->next->data){
                    int temp = curr->data;
                    curr->data = curr->next->data;
                    curr->next->data = temp;
                }
            }
            else{
                if(curr->next && curr->data < curr->next->data){
                    int temp = curr->data;
                    curr->data = curr->next->data;
                    curr->next->data = temp;
                }
            }
            flag = !flag;
            curr = curr->next;
        }
        return head;
    }
};

// { Driver Code Starts.


int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Solution ob;
		Node *ans = ob.zigZag(head);
		print(ans);
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends